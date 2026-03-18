/*
 * XREFs of CmLoadDifferencingKey @ 0x140913148
 * Callers:
 *     NtLoadKeyEx @ 0x140913030 (NtLoadKeyEx.c)
 *     VrpLoadDifferencingHive @ 0x14094AFAC (VrpLoadDifferencingHive.c)
 *     VrpPreLoadKey @ 0x140A71EB8 (VrpPreLoadKey.c)
 *     NtLoadKey2 @ 0x140A8AD70 (NtLoadKey2.c)
 *     NtLoadKey3 @ 0x140A91140 (NtLoadKey3.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140458628 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     CmLoadKey @ 0x140910E98 (CmLoadKey.c)
 *     CmReleaseLoadKeyContext @ 0x140912250 (CmReleaseLoadKeyContext.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     CmpTraceHiveLoadStart @ 0x140912F64 (CmpTraceHiveLoadStart.c)
 *     ObDeleteCapturedInsertInfo @ 0x1409130A0 (ObDeleteCapturedInsertInfo.c)
 *     CmpInitializeParseContext @ 0x140913DE0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 *     CmpTraceHiveLoadStop @ 0x140913F70 (CmpTraceHiveLoadStop.c)
 *     CmCheckNoTxContext @ 0x140914000 (CmCheckNoTxContext.c)
 *     CmpNameFromAttributes @ 0x140914048 (CmpNameFromAttributes.c)
 *     CmConvertHandleToKernelHandle @ 0x140914358 (CmConvertHandleToKernelHandle.c)
 *     ObReferenceObjectByName @ 0x140915290 (ObReferenceObjectByName.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BA9B58 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BA9B98 (CmpReleaseHiveLoadUnloadRundown.c)
 */

__int64 __fastcall CmLoadDifferencingKey(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        ACCESS_MASK DesiredAccess,
        HANDLE *a8,
        __int64 a9,
        __int64 a10,
        char a11,
        void *a12,
        KPROCESSOR_MODE PreviousMode)
{
  char v15; // r13
  PVOID v16; // r15
  struct _OBJECT_HANDLE_INFORMATION *v17; // r12
  __int64 v18; // rdx
  int v19; // esi
  unsigned int Length; // esi
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  wchar_t *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  PVOID v29; // rax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v31; // rbx
  int v32; // eax
  char v33; // r12
  int v34; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  PVOID v39; // rbx
  __int64 v41; // rcx
  char v42; // [rsp+60h] [rbp-3F8h]
  char v43; // [rsp+62h] [rbp-3F6h]
  struct _KEVENT *v44; // [rsp+68h] [rbp-3F0h]
  char UnloadRundown; // [rsp+70h] [rbp-3E8h]
  PVOID v46; // [rsp+78h] [rbp-3E0h] BYREF
  int v47; // [rsp+80h] [rbp-3D8h]
  int v48; // [rsp+84h] [rbp-3D4h]
  PVOID Object; // [rsp+88h] [rbp-3D0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+90h] [rbp-3C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-3B8h] BYREF
  HANDLE *v52; // [rsp+B0h] [rbp-3A8h]
  __int64 v53; // [rsp+B8h] [rbp-3A0h] BYREF
  PVOID v54[2]; // [rsp+C0h] [rbp-398h] BYREF
  __m128i v55; // [rsp+D0h] [rbp-388h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-378h]
  int v57; // [rsp+F0h] [rbp-368h]
  int v58; // [rsp+F8h] [rbp-360h]
  HANDLE v59; // [rsp+100h] [rbp-358h] BYREF
  PVOID v60; // [rsp+108h] [rbp-350h]
  PPRIVILEGE_SET Privileges; // [rsp+110h] [rbp-348h]
  _QWORD v62[2]; // [rsp+118h] [rbp-340h] BYREF
  UNICODE_STRING v63; // [rsp+128h] [rbp-330h] BYREF
  HANDLE Handle; // [rsp+138h] [rbp-320h] BYREF
  HANDLE v65[2]; // [rsp+140h] [rbp-318h] BYREF
  HANDLE v66[2]; // [rsp+150h] [rbp-308h] BYREF
  __int128 v67; // [rsp+160h] [rbp-2F8h]
  __int128 v68; // [rsp+170h] [rbp-2E8h]
  int v69; // [rsp+180h] [rbp-2D8h]
  __int64 v70; // [rsp+188h] [rbp-2D0h]
  __int64 v71; // [rsp+190h] [rbp-2C8h]
  _QWORD v72[3]; // [rsp+198h] [rbp-2C0h] BYREF
  __int64 v73; // [rsp+1B0h] [rbp-2A8h]
  __int128 v74; // [rsp+1B8h] [rbp-2A0h]
  __int64 v75; // [rsp+1C8h] [rbp-290h]
  _KAFFINITY_EX v76[2]; // [rsp+1D0h] [rbp-288h] BYREF

  v55.m128i_i64[0] = a2;
  v52 = a8;
  v58 = a3;
  v70 = a5;
  v46 = a6;
  v71 = a10;
  v65[0] = a12;
  *(_OWORD *)&v76[0].Count = 0LL;
  *(_OWORD *)v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  DestinationString = 0LL;
  v63 = 0LL;
  v53 = 0LL;
  memset_0(&v76[0].StaticBitmap[13], 0, 0x1D0uLL);
  Handle = 0LL;
  v69 = 0;
  v15 = 0;
  CmpInitializeThreadInfo(v76);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v43 = 0;
  RtlInitUnicodeString(&v63, 0LL);
  Object = 0LL;
  BugCheckParameter2[0] = 0LL;
  v54[0] = 0LL;
  v59 = 0LL;
  v16 = 0LL;
  v44 = 0LL;
  Privileges = 0LL;
  CmpInitializeParseContext(&v76[0].StaticBitmap[13]);
  v17 = 0LL;
  v60 = 0LL;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
  {
    v42 = 0;
    if ( (a3 & 0xFFFF000B) != 0 || a10 && (a3 & 0xFFFF9EFF) != 0 )
      goto LABEL_114;
    if ( !a11 )
    {
LABEL_5:
      if ( (a3 & 0x1000) == 0 || (a3 & 0x600) == 0x600 )
      {
        v47 = a3 & 0x810;
        v19 = CmCheckNoTxContext();
        if ( v19 < 0 )
          goto LABEL_67;
        v57 = a3 & 0x10;
        if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
        {
          v19 = -1073741727;
          goto LABEL_103;
        }
        if ( v47 )
        {
          if ( v52 )
          {
            if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
            {
              v19 = -1073741583;
              goto LABEL_103;
            }
LABEL_11:
            LOBYTE(v18) = PreviousMode;
            v19 = CmpNameFromAttributes(v55.m128i_i64[0], v18, &v63);
            v48 = v19;
            if ( v19 >= 0 )
            {
              if ( PreviousMode == 1 )
              {
                if ( (a1 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v47 )
                {
                  v28 = 0x7FFFFFFF0000LL;
                  if ( (unsigned __int64)v52 < 0x7FFFFFFF0000LL )
                    v28 = (__int64)v52;
                  *(_QWORD *)v28 = 0LL;
                }
              }
              *(_OWORD *)v66 = *(_OWORD *)a1;
              v67 = *(_OWORD *)(a1 + 16);
              v68 = *(_OWORD *)(a1 + 32);
              if ( (a3 & 0x10) != 0 && v66[1] )
              {
                v19 = -1073741585;
                v48 = -1073741585;
                v16 = 0LL;
                v15 = 0;
                goto LABEL_67;
              }
              if ( PreviousMode == 1 )
              {
                v55 = 0LL;
                v26 = v67;
                if ( (unsigned __int64)v67 >= 0x7FFFFFFF0000LL )
                  v26 = 0x7FFFFFFF0000LL;
                v55.m128i_i32[0] = *(_DWORD *)v26;
                v27 = *(_QWORD *)(v26 + 8);
                v55.m128i_i64[1] = v27;
                DestinationString = (UNICODE_STRING)v55;
                if ( (unsigned __int16)_mm_cvtsi128_si32(v55) && (v27 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
              }
              else
              {
                DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
              }
              Length = DestinationString.Length;
              if ( DestinationString.Length )
              {
                TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
                Privileges = TransientPoolWithQuota;
                if ( !TransientPoolWithQuota )
                {
                  v19 = -1073741670;
                  v48 = -1073741670;
                  v16 = 0LL;
                  v15 = 0;
                  goto LABEL_67;
                }
                v22 = (wchar_t *)TransientPoolWithQuota;
                memmove(TransientPoolWithQuota, DestinationString.Buffer, Length);
                DestinationString.Length = Length;
                DestinationString.MaximumLength = Length;
                DestinationString.Buffer = v22;
                v17 = (struct _OBJECT_HANDLE_INFORMATION *)v60;
              }
              else
              {
                RtlInitUnicodeString(&DestinationString, 0LL);
              }
              *(_QWORD *)&v67 = &DestinationString;
              *(_QWORD *)&v68 = 0LL;
              if ( v70 )
              {
                LOBYTE(v25) = PreviousMode;
                v19 = CmObReferenceObjectByHandle(v70, 0, v24, v25, (__int64)&Object, 0LL);
                if ( v19 < 0 )
                {
                  v16 = 0LL;
                  v15 = 0;
                  goto LABEL_67;
                }
              }
              v29 = v46;
              if ( v46 )
              {
                v46 = 0LL;
                v19 = ObReferenceObjectByHandle(v29, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v46, 0LL);
                v44 = (struct _KEVENT *)v46;
                if ( v19 < 0 )
                {
                  v16 = v46;
                  goto LABEL_66;
                }
              }
              if ( v71 )
              {
                LOBYTE(v25) = PreviousMode;
                v19 = CmObReferenceObjectByHandle(v71, 0, v24, v25, (__int64)v54, 0LL);
                if ( v19 < 0 )
                  goto LABEL_65;
              }
              if ( v65[0] )
              {
                v46 = 0LL;
                v19 = ObReferenceObjectByHandle(v65[0], 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v46, 0LL);
                v17 = (struct _OBJECT_HANDLE_INFORMATION *)v46;
                v60 = v46;
                if ( v19 < 0 )
                  goto LABEL_65;
                if ( *((_DWORD *)v46 + 48) != 2 )
                {
                  v19 = -1073741656;
                  goto LABEL_65;
                }
              }
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v43 = 1;
              LOBYTE(v24) = PreviousMode;
              v19 = CmConvertHandleToKernelHandle(v66[1], v23, v24, 131097LL, &v59);
              if ( v19 < 0 )
              {
LABEL_65:
                v16 = v44;
LABEL_66:
                v15 = v42;
                goto LABEL_67;
              }
              v66[1] = v59;
              v31 = 0LL;
              memset_0(&v76[0].StaticBitmap[1], 0, 0x60uLL);
              v55 = 0LL;
              v56 = 0LL;
              v62[1] = v62;
              v62[0] = v62;
              if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
              {
                if ( v66[1] )
                {
                  v46 = 0LL;
                  ObReferenceObjectByHandle(v66[1], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v46, 0LL);
                  v31 = v46;
                }
                v76[0].StaticBitmap[11] = 2LL;
                v76[0].StaticBitmap[1] = (unsigned __int64)v31;
                v76[0].StaticBitmap[2] = (unsigned __int64)&DestinationString;
                v76[0].StaticBitmap[3] = (unsigned __int64)&v63;
                LODWORD(v76[0].StaticBitmap[4]) = a3;
                v76[0].StaticBitmap[5] = (unsigned __int64)Object;
                v76[0].StaticBitmap[6] = (unsigned __int64)v44;
                LODWORD(v76[0].StaticBitmap[7]) = DesiredAccess;
                v76[0].StaticBitmap[8] = (unsigned __int64)v52;
                v76[0].StaticBitmap[12] = (unsigned __int64)v17;
                v55.m128i_i64[0] = (__int64)&v76[0].StaticBitmap[1];
                v55.m128i_i64[1] = (__int64)v54[0];
                LOBYTE(v56) = a11;
                v19 = CmpCallCallBacksEx(
                        0x20u,
                        (__int64)&v76[0].StaticBitmap[1],
                        (__int64)&v55,
                        1,
                        0x21u,
                        0LL,
                        (__int64)v62);
              }
              if ( v19 < 0 )
              {
                if ( v19 == -1073740541 )
                {
                  v19 = 0;
                  v33 = 1;
                  goto LABEL_49;
                }
              }
              else
              {
                CmpTraceHiveLoadStart(&v63.Length, a3);
                v42 = 1;
                if ( (a3 & 0x10) != 0 )
                  v32 = CmLoadAppKey(
                          v66,
                          &v63,
                          a3,
                          0LL,
                          (__int64)Object,
                          v44,
                          v17,
                          PreviousMode,
                          &v53,
                          BugCheckParameter2);
                else
                  v32 = CmLoadKey(
                          (__int64)v66,
                          &v63,
                          a3,
                          0LL,
                          (__int64)Object,
                          (__int64)v54[0],
                          a11,
                          v44,
                          (__int64)v17,
                          PreviousMode,
                          (__int64)&v53,
                          BugCheckParameter2);
                v19 = v32;
                if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v62[0] != v62 )
                {
                  v74 = 0LL;
                  v75 = 0LL;
                  v72[0] = v31;
                  v72[1] = (unsigned int)v19;
                  v73 = (unsigned int)v19;
                  v72[2] = &v76[0].StaticBitmap[1];
                  v65[0] = v72;
                  v65[1] = &v55;
                  CmpCallCallBacksEx(0x21u, (__int64)v72, (__int64)v65, 0, 0x21u, (__int64)v31, (__int64)v62);
                  v19 = v73;
                }
              }
              v33 = 0;
LABEL_49:
              if ( v31 )
                ObfDereferenceObject(v31);
              if ( Object )
              {
                ObfDereferenceObject(Object);
                Object = 0LL;
              }
              if ( v19 >= 0 && v47 && !v33 )
              {
                v46 = 0LL;
                v34 = v76[0].StaticBitmap[13];
                if ( (a3 & 0x10) != 0 )
                  v34 = 64;
                LODWORD(v76[0].StaticBitmap[13]) = v34;
                LODWORD(p_DestinationString) = v53;
                if ( !v53 )
                {
                  p_DestinationString = &DestinationString;
                  v53 = (__int64)&DestinationString;
                }
                v19 = ObReferenceObjectByName(
                        (_DWORD)p_DestinationString,
                        64,
                        0,
                        0,
                        (__int64)CmKeyObjectType,
                        0,
                        (unsigned int)&v76[0].StaticBitmap[13],
                        (__int64)&v46);
                if ( v19 >= 0 )
                {
                  v39 = v46;
                  ObDeleteCapturedInsertInfo((__int64)v46, v36, v37, v38);
                  v19 = ObOpenObjectByPointer(
                          v39,
                          PreviousMode != 0 ? 64 : 576,
                          0LL,
                          DesiredAccess,
                          (POBJECT_TYPE)CmKeyObjectType,
                          PreviousMode,
                          &Handle);
                  ObfDereferenceObject(v39);
                  if ( v19 >= 0 )
                    *v52 = Handle;
                }
                if ( BugCheckParameter2[0] )
                {
                  if ( (a3 & 0x10) != 0 )
                  {
                    CmReleaseLoadKeyContext(BugCheckParameter2[0], v19);
                  }
                  else
                  {
                    CmpLockRegistry(BugCheckParameter2[0]);
                    CmpDereferenceKeyControlBlock(BugCheckParameter2[0]);
                    CmpUnlockRegistry(v41);
                  }
                  BugCheckParameter2[0] = 0LL;
                }
                if ( v19 < 0 && (a3 & 0x800) != 0 )
                  v19 = 0;
              }
              goto LABEL_65;
            }
LABEL_103:
            v15 = 0;
            v16 = 0LL;
            goto LABEL_67;
          }
        }
        else if ( !v52 )
        {
          if ( v46 )
          {
            v19 = -1073741581;
            goto LABEL_103;
          }
          goto LABEL_11;
        }
        v19 = -1073741579;
        goto LABEL_103;
      }
LABEL_114:
      v19 = -1073741583;
      goto LABEL_67;
    }
    if ( a10 )
    {
      if ( (a3 & 0x4000) == 0 )
        goto LABEL_114;
      goto LABEL_5;
    }
    v19 = -1073741576;
  }
  else
  {
    v19 = -1073741431;
  }
LABEL_67:
  if ( BugCheckParameter2[0] )
    CmReleaseLoadKeyContext(BugCheckParameter2[0], v19);
  if ( v53 && (UNICODE_STRING *)v53 != &DestinationString )
    CmpFreeTransientPoolWithTag((void *)v53, 0x624E4D43u);
  if ( v59 )
    ZwClose(v59);
  if ( v43 )
    KeLeaveCriticalRegion();
  if ( v60 )
    ObfDereferenceObject(v60);
  if ( v54[0] )
    ObfDereferenceObject(v54[0]);
  if ( v16 )
    ObfDereferenceObject(v16);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v63.Buffer )
    ExFreePoolWithTag(v63.Buffer, 0);
  CmpCleanupParseContext(&v76[0].StaticBitmap[13], 0LL);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( v15 )
    CmpTraceHiveLoadStop((unsigned int)v19);
  CmCleanupThreadInfo((_KAFFINITY_EX **)v76);
  return (unsigned int)v19;
}
