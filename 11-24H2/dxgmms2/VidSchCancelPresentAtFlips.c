/*
 * XREFs of VidSchCancelPresentAtFlips @ 0x140048750
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PRESENTS_FLAGS@@@Z @ 0x14003E5B0 (-VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PR.c)
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x14003EEEC (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x14003F754 (-VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLI.c)
 *     McTemplateK0qqxxqxqqqq_EtwWriteTransfer @ 0x140050CB8 (McTemplateK0qqxxqxqqqq_EtwWriteTransfer.c)
 *     ?VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z @ 0x14005433C (-VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall VidSchCancelPresentAtFlips(
        struct _VIDSCH_DEVICE *a1,
        struct _LUID a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        char a6,
        HANDLE Handle)
{
  char v11; // di
  NTSTATUS v12; // r14d
  PVOID v13; // rbx
  __int64 v15; // r13
  char v16; // si
  unsigned int v17; // r12d
  __int64 v18; // rdx
  struct _VIDSCH_DEVICE *v19; // r8
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // r9
  __int64 v24; // rcx
  PVOID Object; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v26; // [rsp+80h] [rbp-39h] BYREF
  unsigned int v27; // [rsp+84h] [rbp-35h] BYREF
  unsigned int v28; // [rsp+88h] [rbp-31h] BYREF
  unsigned int v29; // [rsp+8Ch] [rbp-2Dh] BYREF
  _BYTE v30[4]; // [rsp+90h] [rbp-29h] BYREF
  unsigned int v31; // [rsp+94h] [rbp-25h]
  unsigned int v32; // [rsp+98h] [rbp-21h]
  __int64 v33; // [rsp+A0h] [rbp-19h]
  _BYTE v34[48]; // [rsp+A8h] [rbp-11h] BYREF
  LONG HighPart; // [rsp+114h] [rbp+5Bh]
  int v36; // [rsp+128h] [rbp+6Fh]

  HighPart = a2.HighPart;
  if ( a5 == 1 )
  {
    VidSchiReprogramVSyncSuppressionForPresent(a1, *(_QWORD *)&a2, a4, a6);
    return 0LL;
  }
  v11 = 0;
  if ( a5 != 2 )
  {
    v15 = *((_QWORD *)a1 + 4);
    v16 = -1;
    v26 = 0;
    v27 = -1;
    v29 = -1;
    v28 = -1;
    v17 = 0;
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v34, (unsigned __int64 *)(v15 + 1984), 1, 0);
    if ( *(int *)(v15 + 3744) < 0 )
    {
LABEL_15:
      v23 = 37;
      LODWORD(v24) = 0;
    }
    else
    {
      v20 = *(_QWORD *)(v15 + 3560);
      v21 = 0LL;
      v19 = (struct _VIDSCH_DEVICE *)*(int *)(v15 + 3744);
      v22 = v20;
      LODWORD(v18) = 0;
      while ( *(_DWORD *)(v22 + 112) != 2
           || *(_DWORD *)v22 != a2.LowPart
           || *(_DWORD *)(v22 + 4) != HighPart
           || *(_QWORD *)(v22 + 8) != a3 )
      {
        LODWORD(v18) = v18 + 1;
        ++v21;
        v22 += 160LL;
        if ( v21 > (__int64)v19 )
          goto LABEL_15;
      }
      LODWORD(Object) = 0;
      VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v30,
        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)(v20 + 160LL * (int)v18));
      v19 = *(struct _VIDSCH_DEVICE **)(v18 + 152);
      v17 = v31;
      v24 = *(unsigned int *)(v33 + 4LL * v32);
      v36 = *(_DWORD *)(v33 + 4LL * v32);
      if ( v19 )
      {
        VidSchiCancelQueuedIndependentFlips(
          (struct _VIDSCH_GLOBAL *)v15,
          v31,
          v19,
          *(struct VIDSCH_FLIP_QUEUE **)(*(_QWORD *)(v15 + 8LL * v31 + 3432) + 8 * v24 + 40),
          a4,
          &v29,
          &v26,
          &v27,
          &v28);
        LODWORD(v24) = v36;
        v23 = (char)Object;
        v11 = v26;
        v16 = v27;
      }
    }
    if ( (byte_140081244 & 4) != 0 )
      McTemplateK0qqxxqxqqqq_EtwWriteTransfer(
        v24,
        v18,
        (_DWORD)v19,
        v17,
        v24,
        a2.LowPart,
        a3,
        v23,
        a4,
        v29,
        v11,
        v16,
        v28);
    AcquireSpinLock::Release((AcquireSpinLock *)v34);
    return 0LL;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  if ( v12 >= 0 )
  {
    VidSchiFlushCompletedPresentsForCompSurf(a1, a2, (struct _KEVENT **)&Object);
    v13 = Object;
    if ( Object )
    {
      KeSetEvent((PRKEVENT)Object, 1, 0);
      ObfDereferenceObject(v13);
    }
  }
  return (unsigned int)v12;
}
