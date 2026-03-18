/*
 * XREFs of ?VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PRESENTS_FLAGS@@@Z @ 0x14003E5B0
 * Callers:
 *     VidSchCancelPresentAtFlips @ 0x140048750 (VidSchCancelPresentAtFlips.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14001FB70 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiReprogramVSyncSuppressionForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IIPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_K_NPEAI@Z @ 0x14003E878 (-VidSchiReprogramVSyncSuppressionForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IIPEAU_VIDSCH_DEVICE@@PEAU.c)
 *     McTemplateK0qqxxxtq_EtwWriteTransfer @ 0x140054E14 (McTemplateK0qqxxxtq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiReprogramVSyncSuppressionForPresent(_QWORD *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // bp
  int v6; // r14d
  __int64 n; // r13
  int v8; // ebx
  int v10; // edi
  _QWORD *i; // r8
  _QWORD *m; // rcx
  __int64 *k; // rdx
  int v14; // r15d
  __int64 v15; // rsi
  struct _VIDSCH_GLOBAL *v16; // r9
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  _QWORD *j; // rcx
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rax
  struct VIDSCH_FLIP_QUEUE *v24; // r8
  int v25; // eax
  __int64 **v26; // rcx
  __int64 *ii; // rdx
  int v28; // [rsp+30h] [rbp-88h]
  struct _VIDSCH_GLOBAL *v29; // [rsp+50h] [rbp-68h]
  _QWORD v30[4]; // [rsp+58h] [rbp-60h] BYREF
  __int16 v31; // [rsp+78h] [rbp-40h]
  unsigned int v32; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v33; // [rsp+C8h] [rbp+10h]
  unsigned int v34; // [rsp+D8h] [rbp+20h]

  v33 = a2;
  v4 = 0;
  v29 = (struct _VIDSCH_GLOBAL *)a1[4];
  v32 = 0;
  v30[0] = (char *)v29 + 1984;
  v6 = 0;
  v31 = 0;
  LODWORD(n) = 0;
  v34 = 0;
  v8 = a4 & 1;
  v10 = a2;
  AcquireSpinLock::Acquire((Acquire *)v30);
  for ( i = (_QWORD *)a1[11]; i != a1 + 11; i = (_QWORD *)*i )
  {
    for ( j = (_QWORD *)i[4]; j != i + 4; j = (_QWORD *)*j )
    {
      for ( k = (__int64 *)j[19]; k != j + 19; k = (__int64 *)*k )
      {
        if ( *((_DWORD *)k + 4) == 7 && *((_DWORD *)k + 208) == a3 )
        {
LABEL_27:
          v4 = 3;
          *((_DWORD *)k + 181) = *((_DWORD *)k + 181) & 0xFFFFFEFF | ((v8 ^ 1) << 8);
          goto LABEL_17;
        }
      }
    }
  }
  for ( m = (_QWORD *)a1[9]; m != a1 + 9; m = (_QWORD *)*m )
  {
    for ( k = (__int64 *)m[80]; k != m + 80; k = (__int64 *)*k )
    {
      if ( *((_DWORD *)k + 4) == 7 && *((_DWORD *)k + 208) == a3 )
        goto LABEL_27;
    }
    for ( k = (__int64 *)m[82]; k != m + 82; k = (__int64 *)*k )
    {
      if ( *((_DWORD *)k + 4) == 7 && *((_DWORD *)k + 208) == a3 )
        goto LABEL_27;
    }
  }
  v14 = HIDWORD(v33);
  v15 = 0LL;
  v16 = v29;
  while ( v6 <= *((_DWORD *)v16 + 936) )
  {
    v21 = *((_QWORD *)v16 + 445);
    if ( *(_DWORD *)(v15 + v21) == v10
      && *(_DWORD *)(v15 + v21 + 4) == v14
      && (unsigned int)(*(_DWORD *)(v15 + v21 + 112) - 1) <= 1 )
    {
      v22 = *(_DWORD *)(v15 + v21 + 16);
      for ( n = 0LL; v22; v22 >>= 1 )
      {
        if ( (v22 & 1) != 0 )
          break;
        n = (unsigned int)(n + 1);
      }
      v23 = *((_QWORD *)v16 + n + 429);
      v34 = *(_DWORD *)(v15 + v21 + 20);
      v24 = *(struct VIDSCH_FLIP_QUEUE **)(v23 + 8LL * v34 + 40);
      if ( v24 )
      {
        v25 = *(_DWORD *)(v15 + v21 + 112);
        if ( v25 == 2 )
        {
          VidSchiReprogramVSyncSuppressionForFlipEntry(v16, n, v34, v16, v24, a3, v8, &v32);
          v4 = v32;
          if ( v32 )
            break;
          v16 = v29;
        }
        else if ( v25 == 1 )
        {
          v26 = (__int64 **)(v15 + v21 + 120);
          for ( ii = *v26; ii != (__int64 *)v26; ii = (__int64 *)*ii )
          {
            if ( *((_DWORD *)ii + 40) == a3 )
            {
              v4 = 4;
              LOBYTE(v6) = v34;
              *((_DWORD *)ii + 13) = *((_DWORD *)ii + 13) & 0xFFFFFEFF | ((v8 ^ 1) << 8);
              goto LABEL_17;
            }
          }
        }
      }
    }
    ++v6;
    v15 += 160LL;
  }
  LOBYTE(v6) = v34;
LABEL_17:
  AcquireSpinLock::Release((AcquireSpinLock *)v30);
  if ( (byte_140081244 & 4) != 0 )
    McTemplateK0qqxxxtq_EtwWriteTransfer(v18, v17, v19, n, v6, v10, v28, a3, v8, v4);
  AcquireSpinLock::Release((AcquireSpinLock *)v30);
}
