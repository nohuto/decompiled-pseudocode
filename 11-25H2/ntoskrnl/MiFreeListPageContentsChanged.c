/*
 * XREFs of MiFreeListPageContentsChanged @ 0x140434170
 * Callers:
 *     MiPageFreeToZero @ 0x1403478B0 (MiPageFreeToZero.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140344980 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiGetColorHeadBase @ 0x1404342E0 (MiGetColorHeadBase.c)
 */

void __fastcall MiFreeListPageContentsChanged(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  ULONG_PTR v8; // r9
  volatile signed __int32 *v9; // r8
  unsigned int v10; // eax
  int v11; // r14d
  unsigned __int64 v12; // rcx
  int v13; // [rsp+38h] [rbp+10h]

  v4 = 48 * a2 - 0x220000000000LL;
  v13 = *(_DWORD *)(v4 + 32);
  v5 = MI_PAGE_TO_FULL_COLOR(a2);
  v6 = MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex(v4)];
  v7 = MiGetColorHeadBase(a1, v5, 1LL, BYTE2(v13) >> 6) + 88LL * (unsigned __int8)v5;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
  if ( dword_140E2FE0C == 1 )
  {
    v8 = a2 & 0x1F;
    v9 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E2FE60 + 1) + 4 * (a2 >> 5));
    if ( v8 + v6 <= 0x20 )
    {
      if ( v6 == 32 )
      {
        *v9 = -1;
        goto LABEL_14;
      }
      v10 = ((1 << v6) - 1) << v8;
LABEL_13:
      _InterlockedOr(v9, v10);
      goto LABEL_14;
    }
    if ( (a2 & 0x1F) != 0 )
    {
      v11 = a2 & 0x1F;
      _InterlockedOr(v9, ((1 << (32 - v11)) - 1) << v8);
      v6 -= (unsigned int)(32 - v11);
      ++v9;
    }
    if ( v6 >= 0x20 )
    {
      v12 = v6 >> 5;
      v6 += -32LL * (v6 >> 5);
      do
      {
        *v9++ = -1;
        --v12;
      }
      while ( v12 );
    }
    if ( v6 )
    {
      v10 = (1 << v6) - 1;
      goto LABEL_13;
    }
  }
LABEL_14:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
}
