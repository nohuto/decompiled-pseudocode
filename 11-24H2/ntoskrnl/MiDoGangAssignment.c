/*
 * XREFs of MiDoGangAssignment @ 0x14026FEE4
 * Callers:
 *     MiStartDpcGang @ 0x140270670 (MiStartDpcGang.c)
 *     MiDpcGangTarget @ 0x140692720 (MiDpcGangTarget.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1404A6B00 (MiInitializeLargeMdlLeafPfns.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiInitializeNewPfns @ 0x14066CDA4 (MiInitializeNewPfns.c)
 *     MiCreatePfnTemplate @ 0x14066D6E0 (MiCreatePfnTemplate.c)
 *     KeZeroPages @ 0x1406B4330 (KeZeroPages.c)
 *     RtlCompareMemoryUlong @ 0x1406B49B0 (RtlCompareMemoryUlong.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

int __fastcall MiDoGangAssignment(__int64 *a1, ULONG_PTR **a2)
{
  unsigned __int64 v2; // rax
  ULONG_PTR *v4; // rbx
  __int64 v5; // rdx
  unsigned __int16 *v6; // r12
  ULONG_PTR *v7; // r14
  char *v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rsi
  int v11; // eax
  SIZE_T v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  bool v15; // zf
  int v17[4]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v18; // [rsp+50h] [rbp-48h]
  __int128 v19; // [rsp+60h] [rbp-38h]

  LODWORD(v2) = *((_DWORD *)a1 + 46);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      v6 = (unsigned __int16 *)a1[21];
    else
      v6 = 0LL;
    v7 = *a2;
    if ( (v2 & 0x38) != 0 )
    {
      v9 = 512LL;
      v8 = (char *)(a1[20] + ((*v7 - *a1) << 12));
    }
    else
    {
      v8 = 0LL;
      v9 = 0x4000LL;
    }
    while ( 1 )
    {
      v2 = v7[1];
      if ( !v2 )
        break;
      v10 = v9;
      if ( v9 > v2 )
        v10 = v7[1];
      if ( v8 )
      {
        v11 = *((_DWORD *)a1 + 46);
        if ( (v11 & 8) != 0 )
        {
          KeZeroPages(v8, v10 << 12);
        }
        else if ( (v11 & 0x10) != 0 )
        {
          memset_0(v8, -1, v10 << 12);
        }
        else if ( (v11 & 0x20) != 0 )
        {
          v12 = RtlCompareMemoryUlong(v8, v10 << 12, 0);
          if ( v12 != v10 << 12 )
            KeBugCheckEx(0x127u, (ULONG_PTR)v8, *v7, v12, v10 << 12);
        }
        *((_DWORD *)a1 + 39) = 1;
      }
      LODWORD(v2) = *((_DWORD *)a1 + 46);
      if ( (v2 & 4) != 0 )
      {
        v13 = *v6;
        v14 = *((unsigned int *)a1 + 45);
        *(_OWORD *)v17 = 0LL;
        v18 = 0LL;
        v19 = 0LL;
        MiCreatePfnTemplate(v17, v14, v13);
        LODWORD(v2) = MiInitializeNewPfns(48 * *(_DWORD *)v7, v10, (int)v17, (int)v6, *((_DWORD *)a1 + 45), 0LL, 0LL);
        *((_DWORD *)a1 + 39) = 1;
      }
      v15 = v7[1] == v10;
      v7[1] -= v10;
      if ( v15 )
        break;
      *v7 += v10;
      LODWORD(v2) = KeShouldYieldProcessor();
      if ( (_DWORD)v2 )
        goto LABEL_4;
      if ( v8 )
        v8 += 4096 * v10;
    }
  }
  else
  {
    v4 = *a2;
    if ( **a2 )
    {
      v5 = *a1;
      *((_DWORD *)a1 + 39) = 1;
      LODWORD(v2) = MiInitializeLargeMdlLeafPfns(v4, v5);
      if ( *v4 )
LABEL_4:
        *((_DWORD *)a1 + 51) = 1;
    }
  }
  return v2;
}
