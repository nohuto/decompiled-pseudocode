/*
 * XREFs of ?VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004ADA4
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1400B6030 (VidSchiCheckNodeTimeout.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

void __fastcall VidSchiCaptureRunningProcess(struct _VIDSCH_NODE *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  _BYTE *v4; // r10
  __int64 v5; // r9
  __int64 v6; // rdx
  char *v7; // rcx
  __int64 v8; // r9
  char v9; // al
  char *v10; // rax
  _BYTE v11[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
  {
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v11, (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1984LL), 1, 0);
    v2 = *((unsigned int *)a1 + 394);
    if ( (_DWORD)v2 != *((_DWORD *)a1 + 392) )
    {
      v3 = *((_QWORD *)a1 + v2 + 198);
      if ( v3 )
      {
        v4 = (char *)a1 + 2156;
        v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 104) + 40LL) + 2648LL);
        if ( !v5 )
          goto LABEL_12;
        v6 = 15LL;
        v7 = (char *)a1 + 2156;
        v8 = v5 - (_QWORD)v4;
        do
        {
          if ( v6 == -2147483631 )
            break;
          v9 = v7[v8];
          if ( !v9 )
            break;
          *v7++ = v9;
          --v6;
        }
        while ( v6 );
        v10 = v7 - 1;
        if ( v6 )
          v10 = v7;
        *v10 = 0;
        if ( !v6 )
LABEL_12:
          *v4 = 0;
        *((_DWORD *)a1 + 543) = *(_DWORD *)(v3 + 140);
      }
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v11);
  }
}
