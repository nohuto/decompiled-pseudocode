/*
 * XREFs of ?DxgkTrimProcessCommitmentAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403E78A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkTrimProcessCommitmentAdapterCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 **v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rbx
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v16; // [rsp+58h] [rbp-A8h]
  __int64 v17; // [rsp+60h] [rbp-A0h]
  char v18[8]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v19; // [rsp+70h] [rbp-90h]
  char v20; // [rsp+78h] [rbp-88h]
  _BYTE v21[144]; // [rsp+80h] [rbp-80h] BYREF

  if ( a2[3] < a2[2] )
  {
    v19 = a1;
    v20 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
    if ( *((_DWORD *)a1 + 50) == 1 && !*((_BYTE *)a1 + 209) )
    {
      v4 = *a2;
      v14 = 0LL;
      v4 += 448LL;
      v17 = 0LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v4, 0LL);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
      v5 = *a2 + 472LL;
      v6 = *(__int64 ***)(*a2 + 480LL);
      if ( *v6 != (__int64 *)v5 )
        goto LABEL_16;
      v16 = *(__int64 **)(*a2 + 480LL);
      v15 = v5;
      *v6 = &v15;
      *(_QWORD *)(v5 + 8) = &v15;
      v7 = *a2 + 448LL;
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v7 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 391) + 760LL)
                                                                                         + 8LL)
                                                                             + 1080LL))(
             *(_QWORD *)(*((_QWORD *)a1 + 391) + 768LL),
             *a2,
             &v14,
             *((unsigned int *)a2 + 2)) == -1071775484 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, a1, 0LL);
        if ( (a2[1] & 2) != 0 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21, 0LL) >= 0 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 391) + 760LL) + 8LL)
                                                                                       + 1072LL))(
            *(_QWORD *)(*((_QWORD *)a1 + 391) + 768LL),
            *a2,
            &v14,
            *((unsigned int *)a2 + 2),
            a2[2] - a2[3],
            &v13);
          a2[3] += v13;
        }
        else
        {
          WdLogSingleEntry1(3LL, a1);
          WdLogGlobalForLineNumber = 964;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
      }
      v8 = *a2 + 448LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v8, 0LL);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
      v9 = v15;
      v10 = v16;
      if ( *(__int64 **)(v15 + 8) != &v15 || (__int64 *)*v16 != &v15 )
LABEL_16:
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v9 + 8) = v10;
      v11 = *a2 + 448LL;
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v11 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v11, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
  }
  return 0LL;
}
