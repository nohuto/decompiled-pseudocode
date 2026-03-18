/*
 * XREFs of ?VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT@@@Z @ 0x140051A20
 * Callers:
 *     VidSchiResetEngine @ 0x140047318 (VidSchiResetEngine.c)
 *     VidSchiResetHwEngine @ 0x140052878 (VidSchiResetHwEngine.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiIncrementContextReference @ 0x140023740 (VidSchiIncrementContextReference.c)
 *     ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1400237B4 (-VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiCollectTdrPayloadEngineTimeout(
        struct _VIDSCH_NODE *a1,
        struct _DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT *a2)
{
  __int64 v2; // rsi
  struct _VIDSCH_NODE *v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  struct _VIDSCH_NODE *v11; // r11
  __int64 v12; // rcx
  _QWORD *v13; // r8
  struct _VIDSCH_NODE **v14; // r11
  __int64 v15; // rax
  __int64 *i; // rax
  __int64 v17; // r9
  char v18; // r9
  int v19; // r9d
  __int64 v20; // r10
  char v21; // al
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rbx
  __int64 v26; // r9
  _BYTE v27[56]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a1 + 3);
  v3 = a1;
  v4 = *((unsigned __int16 *)a1 + 2);
  v6 = *(_QWORD *)(v2 + 688);
  if ( (unsigned int)v4 < *(_DWORD *)(v2 + 760) )
    v6 += 8 * v4;
  *((_DWORD *)a2 + 1) = *(unsigned __int16 *)(*(_QWORD *)v6 + 6LL);
  v7 = *((unsigned __int16 *)v3 + 2);
  v8 = *(_QWORD *)(v2 + 688);
  if ( (unsigned int)v7 < *(_DWORD *)(v2 + 760) )
    v8 += 8 * v7;
  *(_DWORD *)a2 = *(unsigned __int16 *)(*(_QWORD *)v8 + 8LL);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v27, (unsigned __int64 *)(v2 + 1984), 1, 0);
  v9 = 0LL;
  if ( (*((_DWORD *)v3 + 3) & 2) != 0 )
  {
    *((_DWORD *)a2 + 6) = *((_DWORD *)v3 + 122);
    v10 = *((_DWORD *)v3 + 123);
    v3 = (struct _VIDSCH_NODE *)((char *)v3 + 1712);
    *((_DWORD *)a2 + 7) = v10;
    v11 = *(struct _VIDSCH_NODE **)v3;
    if ( *(struct _VIDSCH_NODE **)v3 == v3 )
      goto LABEL_39;
    while ( 1 )
    {
      if ( *((_BYTE *)v11 + 32) != (_BYTE)v9 )
      {
        v24 = *(_QWORD *)(v2 + 16);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 61442LL, v24, (char *)v11 - 272, v9);
        WdLogGlobalForLineNumber = 906;
        goto LABEL_34;
      }
      VidSchiIncrementHwContextReference((struct _VIDSCH_NODE *)((char *)v11 - 272));
      v15 = *(_QWORD *)(v12 + 224);
      *(_BYTE *)(v12 + 304) = 1;
      if ( *(_QWORD *)(v12 + 232) == v15 )
      {
        if ( *(_DWORD *)(v12 + 308) != (_DWORD)v9 )
        {
          for ( i = *(__int64 **)(v12 + 288); i != (__int64 *)(v12 + 288); i = (__int64 *)*i )
          {
            if ( *((_DWORD *)i + 36) != (_DWORD)v9 )
              goto LABEL_15;
          }
        }
        goto LABEL_28;
      }
LABEL_15:
      if ( !v13 )
        goto LABEL_32;
      v17 = v13[1];
      if ( *(_BYTE *)(*(_QWORD *)(v17 + 40) + 2632LL) != (_BYTE)v9 || (v19 = *(_DWORD *)(v17 + 48), (v19 & 8) != 0) )
        v18 = 1;
      else
        v18 = v19 & 1;
      v20 = *(_QWORD *)(v12 + 8);
      if ( *(_BYTE *)(*(_QWORD *)(v20 + 40) + 2632LL) != (_BYTE)v9 || (v22 = *(_DWORD *)(v20 + 48), (v22 & 8) != 0) )
        v21 = 1;
      else
        v21 = v22 & 1;
      if ( v18 )
        break;
      if ( !v21 )
        goto LABEL_26;
LABEL_28:
      v11 = *v14;
      if ( v11 == v3 )
      {
        if ( !v13 )
          goto LABEL_39;
        v23 = v13[3];
LABEL_38:
        *((_QWORD *)a2 + 4) = v23;
        goto LABEL_39;
      }
    }
    if ( v21 )
    {
LABEL_26:
      if ( *(_QWORD *)(v12 + 216) < v13[27] )
        v13 = (_QWORD *)v12;
      goto LABEL_28;
    }
LABEL_32:
    v13 = (_QWORD *)v12;
    goto LABEL_28;
  }
LABEL_34:
  *((_QWORD *)a2 + 1) = *((_QWORD *)v3 + 59);
  *((_QWORD *)a2 + 2) = *((_QWORD *)v3 + 60);
  v25 = *((_QWORD *)v3 + *((unsigned int *)v3 + 394) + 198);
  if ( v25 )
  {
    if ( *(_BYTE *)(v25 + 910) != (_BYTE)v9 )
    {
      v26 = *(_QWORD *)(v2 + 16);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 61442LL, v26, v25, v9);
      WdLogGlobalForLineNumber = 906;
    }
    VidSchiIncrementContextReference(v25);
    v23 = *(_QWORD *)(v25 + 56);
    *(_BYTE *)(v25 + 910) = 1;
    goto LABEL_38;
  }
LABEL_39:
  AcquireSpinLock::Release((AcquireSpinLock *)v27);
}
