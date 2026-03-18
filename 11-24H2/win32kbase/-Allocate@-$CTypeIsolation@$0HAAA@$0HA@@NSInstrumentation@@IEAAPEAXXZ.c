/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140027710
 * Callers:
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ @ 0x140026B3C (--$AllocateIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1400271F0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 * Callees:
 *     ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400ABE80 (-Allocate@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140119860 (-Create@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline @ 0x1401B60C8 (Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14023F500 (memset.c)
 */

_OWORD *__fastcall NSInstrumentation::CTypeIsolation<28672,112>::Allocate(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 *v4; // r14
  __int64 *v5; // rdi
  __int64 v6; // rbx
  ULONG v7; // r8d
  struct _RTL_BITMAP *v8; // r12
  ULONG ClearBits; // ebp
  unsigned int v10; // eax
  unsigned int v11; // r15d
  void *v12; // r13
  unsigned int v13; // r13d
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 *v16; // rcx
  __int64 **v17; // rax
  _QWORD *v18; // rax
  _OWORD *result; // rax
  __int64 v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rbx
  void *v24; // rcx
  void *v25; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  struct _PAGED_LOOKASIDE_LIST *v27; // rcx
  __int64 v28; // [rsp+70h] [rbp+8h]
  _QWORD *v29; // [rsp+78h] [rbp+10h]

  if ( *((_BYTE *)a1 + 36) )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline();
    v27 = (struct _PAGED_LOOKASIDE_LIST *)a1[3];
    if ( IsEnabledDeviceUsageNoInline )
    {
      result = ExAllocateFromPagedLookasideList(v27);
      if ( result )
      {
        *result = 0LL;
        result[1] = 0LL;
        result[2] = 0LL;
        result[3] = 0LL;
        result[4] = 0LL;
        result[5] = 0LL;
        result[6] = 0LL;
      }
    }
    else
    {
      return ExAllocateFromPagedLookasideList(v27);
    }
  }
  else
  {
    v2 = a1[2];
    v3 = 0LL;
    v28 = v2;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2, 0LL);
    v4 = (__int64 *)*a1;
    if ( (__int64 *)*a1 != a1 )
    {
      while ( 1 )
      {
        v5 = (__int64 *)v4[4];
        v6 = *v5;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v6, 0LL);
        v7 = *((_DWORD *)v5 + 8);
        v8 = (struct _RTL_BITMAP *)(v5[2] ^ v5[3]);
        if ( v7 >= 0xFC )
          v7 = 0;
        ClearBits = RtlFindClearBits((PRTL_BITMAP)(v5[2] ^ v5[3]), 1u, v7);
        if ( ClearBits == -1 )
          break;
        v10 = *((_DWORD *)v5 + 9);
        v11 = ClearBits / 0x24;
        if ( v10 >= 7 || v11 < v10 )
        {
          v13 = v11 << 12;
          v29 = v5 + 1;
        }
        else
        {
          v12 = (void *)((v11 << 12) + (v5[1] ^ v5[2]));
          v29 = v5 + 1;
          if ( (int)MmCommitSessionMappedView(v12, 4096LL) < 0 )
            break;
          memset(v12, 0, 0x1000uLL);
          ++*((_DWORD *)v5 + 9);
          v13 = v11 << 12;
        }
        RtlTestBit(v8, ClearBits);
        RtlSetBit(v8, ClearBits);
        if ( ++*((_DWORD *)v5 + 8) >= 0xFCu )
          *((_DWORD *)v5 + 8) = 0;
        v14 = v13 + (*v29 ^ v5[2]);
        ExReleasePushLockExclusiveEx(v6, 0LL);
        KeLeaveCriticalRegion();
        v3 = v14 + 112 * (ClearBits % 0x24);
        if ( v3 )
        {
          if ( v4 != (__int64 *)*a1 )
          {
            ExReleasePushLockSharedEx(v28, 0LL);
            KeLeaveCriticalRegion();
            v15 = a1[2];
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v15, 0LL);
            v16 = (__int64 *)*v4;
            if ( *(__int64 **)(*v4 + 8) == v4 )
            {
              v17 = (__int64 **)v4[1];
              if ( *v17 == v4 )
              {
                *v17 = v16;
                v16[1] = (__int64)v17;
                v18 = (_QWORD *)*a1;
                if ( *(__int64 **)(*a1 + 8) == a1 )
                {
                  *v4 = (__int64)v18;
                  v4[1] = (__int64)a1;
                  v18[1] = v4;
                  *a1 = (__int64)v4;
                  goto LABEL_19;
                }
              }
            }
LABEL_29:
            __fastfail(3u);
          }
          ExReleasePushLockSharedEx(v28, 0LL);
LABEL_20:
          KeLeaveCriticalRegion();
          return (_OWORD *)v3;
        }
LABEL_24:
        v4 = (__int64 *)*v4;
        if ( v4 == a1 )
        {
          v2 = v28;
          v3 = 0LL;
          goto LABEL_26;
        }
      }
      ExReleasePushLockExclusiveEx(v6, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_24;
    }
LABEL_26:
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
    v20 = NSInstrumentation::CSectionEntry<28672,112>::Create();
    v21 = (_QWORD *)v20;
    if ( v20 )
    {
      v3 = NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(*(_QWORD *)(v20 + 32));
      if ( v3 )
      {
        v15 = a1[2];
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v15, 0LL);
        v22 = *a1;
        if ( *(__int64 **)(*a1 + 8) != a1 )
          goto LABEL_29;
        *v21 = v22;
        v21[1] = a1;
        *(_QWORD *)(v22 + 8) = v21;
        *((_DWORD *)a1 + 8) += 252;
        *a1 = (__int64)v21;
LABEL_19:
        ExReleasePushLockExclusiveEx(v15, 0LL);
        goto LABEL_20;
      }
      v23 = v21[4];
      if ( v23 )
      {
        if ( *(_QWORD *)(v23 + 16) != *(_QWORD *)(v23 + 24) )
          RtlFindSetBits((PRTL_BITMAP)(*(_QWORD *)(v23 + 16) ^ *(_QWORD *)(v23 + 24)), 1u, 0);
        if ( *(_QWORD *)v23 )
          ExFreePoolWithTag(*(PVOID *)v23, 0);
        if ( *(_QWORD *)(v23 + 16) != *(_QWORD *)(v23 + 24) )
          ExFreePoolWithTag((PVOID)(*(_QWORD *)(v23 + 16) ^ *(_QWORD *)(v23 + 24)), 0);
        ExFreePoolWithTag((PVOID)v23, 0);
        v21[4] = 0LL;
      }
      v24 = (void *)v21[3];
      if ( v24 )
      {
        MmUnmapViewInSessionSpace(v24);
        v21[3] = 0LL;
      }
      v25 = (void *)v21[2];
      if ( v25 )
      {
        ObfDereferenceObject(v25);
        v21[2] = 0LL;
      }
      ExFreePoolWithTag(v21, 0);
    }
    return (_OWORD *)v3;
  }
  return result;
}
