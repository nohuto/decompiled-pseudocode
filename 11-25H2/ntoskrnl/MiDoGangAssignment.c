/*
 * XREFs of MiDoGangAssignment @ 0x1404D4858
 * Callers:
 *     MiStartDpcGang @ 0x140417840 (MiStartDpcGang.c)
 *     MiDpcGangTarget @ 0x1406861F0 (MiDpcGangTarget.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14041753C (MiInitializeLargeMdlLeafPfns.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiInitializeNewPfns @ 0x140660094 (MiInitializeNewPfns.c)
 *     MiCreatePfnTemplate @ 0x1406609D0 (MiCreatePfnTemplate.c)
 *     KeZeroPages @ 0x1406A80C0 (KeZeroPages.c)
 *     RtlCompareMemoryUlong @ 0x1406A8740 (RtlCompareMemoryUlong.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall MiDoGangAssignment(__int64 a1, ULONG_PTR **a2)
{
  int v2; // eax
  unsigned __int64 *v4; // rbx
  __int64 v5; // rdx
  unsigned __int16 *v6; // r12
  ULONG_PTR *v7; // r14
  char *v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  int v12; // eax
  SIZE_T v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  bool v16; // zf
  int v17[4]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v18; // [rsp+50h] [rbp-48h]
  __int128 v19; // [rsp+60h] [rbp-38h]

  v2 = *(_DWORD *)(a1 + 184);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      v6 = *(unsigned __int16 **)(a1 + 168);
    else
      v6 = 0LL;
    v7 = *a2;
    if ( (v2 & 0x38) != 0 )
    {
      v9 = 512LL;
      v8 = (char *)(*(_QWORD *)(a1 + 160) + ((*v7 - *(_QWORD *)a1) << 12));
    }
    else
    {
      v8 = 0LL;
      v9 = 0x4000LL;
    }
    while ( 1 )
    {
      v10 = v7[1];
      if ( !v10 )
        break;
      v11 = v9;
      if ( v9 > v10 )
        v11 = v7[1];
      if ( v8 )
      {
        v12 = *(_DWORD *)(a1 + 184);
        if ( (v12 & 8) != 0 )
        {
          KeZeroPages(v8, v11 << 12);
        }
        else if ( (v12 & 0x10) != 0 )
        {
          memset_0(v8, -1, v11 << 12);
        }
        else if ( (v12 & 0x20) != 0 )
        {
          v13 = RtlCompareMemoryUlong(v8, v11 << 12, 0);
          if ( v13 != v11 << 12 )
            KeBugCheckEx(0x127u, (ULONG_PTR)v8, *v7, v13, v11 << 12);
        }
        *(_DWORD *)(a1 + 156) = 1;
      }
      if ( (*(_DWORD *)(a1 + 184) & 4) != 0 )
      {
        v14 = *v6;
        v15 = *(unsigned int *)(a1 + 180);
        *(_OWORD *)v17 = 0LL;
        v18 = 0LL;
        v19 = 0LL;
        MiCreatePfnTemplate(v17, v15, v14);
        MiInitializeNewPfns(48 * *(_DWORD *)v7, v11, (int)v17, (int)v6, *(_DWORD *)(a1 + 180), 0LL, 0LL);
        *(_DWORD *)(a1 + 156) = 1;
      }
      v16 = v7[1] == v11;
      v7[1] -= v11;
      if ( v16 )
        break;
      *v7 += v11;
      if ( KeShouldYieldProcessor() )
        goto LABEL_4;
      if ( v8 )
        v8 += 4096 * v11;
    }
  }
  else
  {
    v4 = *a2;
    if ( **a2 )
    {
      v5 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 156) = 1;
      MiInitializeLargeMdlLeafPfns(v4, v5);
      if ( *v4 )
LABEL_4:
        *(_DWORD *)(a1 + 204) = 1;
    }
  }
}
