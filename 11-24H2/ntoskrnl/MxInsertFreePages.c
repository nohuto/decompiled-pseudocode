/*
 * XREFs of MxInsertFreePages @ 0x140C54EE0
 * Callers:
 *     MxCreateFreePfns @ 0x140C546DC (MxCreateFreePfns.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiRestrictRangeToNode @ 0x1403FC38C (MiRestrictRangeToNode.c)
 *     MiCreateInitialLargeLeafPfns @ 0x140431268 (MiCreateInitialLargeLeafPfns.c)
 *     MiDetermineNewPfnHeatState @ 0x140446D1C (MiDetermineNewPfnHeatState.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14044F1DC (MiInitializeAllResidentPageBasePfns.c)
 *     MiCreateInitialPfns @ 0x14066D630 (MiCreateInitialPfns.c)
 *     MiCreatePfnTemplate @ 0x14066D6E0 (MiCreatePfnTemplate.c)
 */

__int64 __fastcall MxInsertFreePages(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3, unsigned int a4)
{
  _OWORD *v4; // r14
  __int64 result; // rax
  ULONG_PTR v7; // r15
  ULONG_PTR v8; // rsi
  __int64 i; // rbp
  unsigned int v10; // ebx
  ULONG_PTR v11; // rdi
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 v18; // bl
  _OWORD v19[6]; // [rsp+40h] [rbp-68h] BYREF
  int v20; // [rsp+B0h] [rbp+8h]

  memset(v19, 0, 48);
  v4 = 0LL;
  result = a4;
  v7 = a2;
  v8 = BugCheckParameter2;
  for ( i = 48 * BugCheckParameter2 - 0x220000000000LL; v7; v7 -= v11 )
  {
    if ( (_DWORD)result )
      v10 = 3;
    else
      v10 = (KeFeatureBits & 0x2000000000LL) == 0;
    v11 = 1LL;
    while ( v10 < 4 )
    {
      v11 = MiPageSizes[v10];
      if ( ((v11 - 1) & v8) == 0 && v7 >= v11 && MiRestrictRangeToNode(v8, v7) >= v11 )
      {
        v11 = MiPageSizes[v10];
        v12 = MiPageToNode(v8);
        v13 = MiDetermineNewPfnHeatState(0, v10, qword_140E38D50 + 57216LL * v12);
        v14 = a3 & 0xFFFFFBFF;
        a3 |= 0x400u;
        if ( !v13 )
          a3 = v14;
        if ( v11 == 1 )
        {
          if ( !v4 )
          {
            v4 = v19;
            MiCreatePfnTemplate((__int64)v19, 0, 0);
          }
          if ( a3 == 1 )
          {
            v20 = *((_DWORD *)v4 + 8);
            BYTE2(v20) &= 0xF8u;
            *((_DWORD *)v4 + 8) = v20;
          }
          MiCreateInitialPfns(i, 1LL, (__int64 *)v4);
        }
        else
        {
          MiInitializeAllResidentPageBasePfns((unsigned __int16 *)&MiSystemPartition, v8, v11, v10, 1, v13 == 0, 0);
          MiCreateInitialLargeLeafPfns(v8, v11, v10, 1, 0, 0);
        }
        v18 = MiLockPageInline(i, v15, v16, v17);
        MiInsertPageInFreeOrZeroedList(v8, a3);
        MiUnlockPage(i, v18);
        break;
      }
      ++v10;
    }
    v8 += v11;
    i += 48 * v11;
    result = a4;
  }
  return result;
}
