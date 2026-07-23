/*
 * XREFs of CmLoadDifferencingKey @ 0x14092E890
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14092C6BC (VrpLoadDifferencingHive.c)
 *     NtLoadKeyEx @ 0x14092E820 (NtLoadKeyEx.c)
 *     VrpPreLoadKey @ 0x140A6D8DC (VrpPreLoadKey.c)
 *     NtLoadKey2 @ 0x140A8C200 (NtLoadKey2.c)
 *     NtLoadKey3 @ 0x140A91A10 (NtLoadKey3.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14044E170 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByName @ 0x14083B4F0 (ObReferenceObjectByName.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     CmLoadKey @ 0x14092D8C8 (CmLoadKey.c)
 *     CmpInitializeParseContext @ 0x14092F540 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092F5F0 (CmpCleanupParseContext.c)
 *     CmpTraceHiveLoadStop @ 0x14092F6D0 (CmpTraceHiveLoadStop.c)
 *     CmCheckNoTxContext @ 0x14092F760 (CmCheckNoTxContext.c)
 *     CmpNameFromAttributes @ 0x14092F7A8 (CmpNameFromAttributes.c)
 *     CmConvertHandleToKernelHandle @ 0x14092FAC0 (CmConvertHandleToKernelHandle.c)
 *     ObDeleteCapturedInsertInfo @ 0x14092FB70 (ObDeleteCapturedInsertInfo.c)
 *     CmpTraceHiveLoadStart @ 0x14092FC18 (CmpTraceHiveLoadStart.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x140930978 (CmReleaseLoadKeyContext.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x140BBB350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BBBAD0 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BBBB10 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmLoadDifferencingKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        ACCESS_MASK DesiredAccess,
        HANDLE *a8,
        int a9,
        __int64 a10,
        char a11,
        void *a12,
        KPROCESSOR_MODE PreviousMode)
{
  char v15; // r12
  PVOID v16; // r15
  struct _OBJECT_HANDLE_INFORMATION *v17; // r13
  __int64 v18; // rdx
  int v19; // esi
  __int64 v20; // rcx
  unsigned int Length; // esi
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  wchar_t *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // r9d
  __int64 v27; // r8
  unsigned __int16 v28; // ax
  __int64 v29; // rax
  PVOID v30; // rax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v32; // rbx
  int AppKey; // eax
  char v34; // r13
  int v35; // eax
  __int64 p_DestinationString; // rcx
  PVOID v37; // rbx
  __int64 v39; // rcx
  char v40; // [rsp+60h] [rbp-408h]
  char v41; // [rsp+62h] [rbp-406h]
  struct _KEVENT *v42; // [rsp+68h] [rbp-400h]
  char UnloadRundown; // [rsp+70h] [rbp-3F8h]
  PVOID v44; // [rsp+78h] [rbp-3F0h] BYREF
  int v45; // [rsp+80h] [rbp-3E8h]
  int v46; // [rsp+84h] [rbp-3E4h]
  PVOID Object; // [rsp+88h] [rbp-3E0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+90h] [rbp-3D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-3C8h] BYREF
  HANDLE *v50; // [rsp+B0h] [rbp-3B8h]
  __int64 v51; // [rsp+B8h] [rbp-3B0h] BYREF
  PVOID v52[2]; // [rsp+C0h] [rbp-3A8h] BYREF
  __m128i v53; // [rsp+D0h] [rbp-398h] BYREF
  __int64 v54; // [rsp+E0h] [rbp-388h]
  int v55; // [rsp+F0h] [rbp-378h]
  unsigned int v56; // [rsp+F8h] [rbp-370h]
  HANDLE v57; // [rsp+100h] [rbp-368h] BYREF
  PVOID v58; // [rsp+108h] [rbp-360h]
  PPRIVILEGE_SET Privileges; // [rsp+110h] [rbp-358h]
  _QWORD v60[2]; // [rsp+118h] [rbp-350h] BYREF
  UNICODE_STRING v61; // [rsp+128h] [rbp-340h] BYREF
  HANDLE Handle; // [rsp+138h] [rbp-330h] BYREF
  HANDLE v63[2]; // [rsp+140h] [rbp-328h] BYREF
  HANDLE v64[2]; // [rsp+150h] [rbp-318h] BYREF
  __int128 v65; // [rsp+160h] [rbp-308h]
  __int128 v66; // [rsp+170h] [rbp-2F8h]
  int v67; // [rsp+180h] [rbp-2E8h]
  __int64 v68; // [rsp+188h] [rbp-2E0h]
  __int64 v69; // [rsp+190h] [rbp-2D8h]
  _QWORD v70[3]; // [rsp+198h] [rbp-2D0h] BYREF
  __int64 v71; // [rsp+1B0h] [rbp-2B8h]
  __int128 v72; // [rsp+1B8h] [rbp-2B0h]
  __int64 v73; // [rsp+1C8h] [rbp-2A0h]
  _KAFFINITY_EX v74[2]; // [rsp+1D0h] [rbp-298h] BYREF

  v53.m128i_i64[0] = a2;
  v50 = a8;
  v56 = a3;
  v68 = a5;
  v44 = a6;
  v69 = a10;
  v63[0] = a12;
  memset(v74, 0, 24);
  *(_OWORD *)v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  DestinationString = 0LL;
  v61 = 0LL;
  v51 = 0LL;
  memset_0(&v74[0].StaticBitmap[15], 0, 0x1D0uLL);
  Handle = 0LL;
  v67 = 0;
  v15 = 0;
  CmpInitializeThreadInfo(v74);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v41 = 0;
  RtlInitUnicodeString(&v61, 0LL);
  Object = 0LL;
  BugCheckParameter2[0] = 0LL;
  v52[0] = 0LL;
  v57 = 0LL;
  v16 = 0LL;
  v42 = 0LL;
  Privileges = 0LL;
  CmpInitializeParseContext(&v74[0].StaticBitmap[15]);
  v17 = 0LL;
  v58 = 0LL;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
  {
    v40 = 0;
    if ( (a3 & 0xFFFF000B) != 0 || a10 && (a3 & 0xFFFF9EFF) != 0 )
      goto LABEL_114;
    if ( !a11 )
    {
LABEL_5:
      if ( (a3 & 0x1000) == 0 || (a3 & 0x600) == 0x600 )
      {
        v45 = a3 & 0x810;
        v19 = CmCheckNoTxContext();
        if ( v19 < 0 )
          goto LABEL_67;
        v55 = a3 & 0x10;
        if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
        {
          v19 = -1073741727;
          goto LABEL_103;
        }
        if ( v45 )
        {
          if ( v50 )
          {
            if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
            {
              v19 = -1073741583;
              goto LABEL_103;
            }
LABEL_11:
            LOBYTE(v18) = PreviousMode;
            v19 = CmpNameFromAttributes(v53.m128i_i64[0], v18, &v61);
            v46 = v19;
            if ( v19 >= 0 )
            {
              if ( PreviousMode == 1 )
              {
                if ( (a1 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v45 )
                {
                  v29 = 0x7FFFFFFF0000LL;
                  if ( (unsigned __int64)v50 < 0x7FFFFFFF0000LL )
                    v29 = (__int64)v50;
                  *(_QWORD *)v29 = 0LL;
                }
              }
              *(_OWORD *)v64 = *(_OWORD *)a1;
              v65 = *(_OWORD *)(a1 + 16);
              v66 = *(_OWORD *)(a1 + 32);
              if ( (a3 & 0x10) != 0 && v64[1] )
              {
                v19 = -1073741585;
                v46 = -1073741585;
                v16 = 0LL;
                v15 = 0;
                goto LABEL_67;
              }
              if ( PreviousMode == 1 )
              {
                v53 = 0LL;
                v20 = v65;
                if ( (unsigned __int64)v65 >= 0x7FFFFFFF0000LL )
                  v20 = 0x7FFFFFFF0000LL;
                v53.m128i_i32[0] = *(_DWORD *)v20;
                v27 = *(_QWORD *)(v20 + 8);
                v53.m128i_i64[1] = v27;
                DestinationString = (UNICODE_STRING)v53;
                v28 = _mm_cvtsi128_si32(v53);
                if ( v28 )
                {
                  if ( (v27 & 1) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v20 = v28 + v27;
                }
              }
              else
              {
                DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
              }
              Length = DestinationString.Length;
              if ( DestinationString.Length )
              {
                TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota(
                                                                    v20,
                                                                    DestinationString.Length,
                                                                    0x6B624D43u);
                Privileges = TransientPoolWithQuota;
                if ( !TransientPoolWithQuota )
                {
                  v19 = -1073741670;
                  v46 = -1073741670;
                  v16 = 0LL;
                  v15 = 0;
                  goto LABEL_67;
                }
                v23 = (wchar_t *)TransientPoolWithQuota;
                memmove(TransientPoolWithQuota, DestinationString.Buffer, Length);
                DestinationString.Length = Length;
                DestinationString.MaximumLength = Length;
                DestinationString.Buffer = v23;
                v17 = (struct _OBJECT_HANDLE_INFORMATION *)v58;
              }
              else
              {
                RtlInitUnicodeString(&DestinationString, 0LL);
              }
              *(_QWORD *)&v65 = &DestinationString;
              *(_QWORD *)&v66 = 0LL;
              if ( v68 )
              {
                LOBYTE(v26) = PreviousMode;
                v19 = CmObReferenceObjectByHandle(v68, 0, v25, v26, (__int64)&Object, 0LL);
                if ( v19 < 0 )
                {
                  v16 = 0LL;
                  v15 = 0;
                  goto LABEL_67;
                }
              }
              v30 = v44;
              if ( v44 )
              {
                v44 = 0LL;
                v19 = ObReferenceObjectByHandle(v30, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v44, 0LL);
                v42 = (struct _KEVENT *)v44;
                if ( v19 < 0 )
                {
                  v16 = v44;
                  goto LABEL_66;
                }
              }
              if ( v69 )
              {
                LOBYTE(v26) = PreviousMode;
                v19 = CmObReferenceObjectByHandle(v69, 0, v25, v26, (__int64)v52, 0LL);
                if ( v19 < 0 )
                  goto LABEL_65;
              }
              if ( v63[0] )
              {
                v44 = 0LL;
                v19 = ObReferenceObjectByHandle(v63[0], 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v44, 0LL);
                v17 = (struct _OBJECT_HANDLE_INFORMATION *)v44;
                v58 = v44;
                if ( v19 < 0 )
                  goto LABEL_65;
                if ( *((_DWORD *)v44 + 48) != 2 )
                {
                  v19 = -1073741656;
                  goto LABEL_65;
                }
              }
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v41 = 1;
              LOBYTE(v25) = PreviousMode;
              v19 = CmConvertHandleToKernelHandle(v64[1], v24, v25, 131097LL, &v57);
              if ( v19 < 0 )
              {
LABEL_65:
                v16 = v42;
LABEL_66:
                v15 = v40;
                goto LABEL_67;
              }
              v64[1] = v57;
              v32 = 0LL;
              memset_0(&v74[0].StaticBitmap[3], 0, 0x60uLL);
              v53 = 0LL;
              v54 = 0LL;
              v60[1] = v60;
              v60[0] = v60;
              if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
              {
                if ( v64[1] )
                {
                  v44 = 0LL;
                  ObReferenceObjectByHandle(v64[1], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v44, 0LL);
                  v32 = v44;
                }
                v74[0].StaticBitmap[13] = 2LL;
                v74[0].StaticBitmap[3] = (unsigned __int64)v32;
                v74[0].StaticBitmap[4] = (unsigned __int64)&DestinationString;
                v74[0].StaticBitmap[5] = (unsigned __int64)&v61;
                LODWORD(v74[0].StaticBitmap[6]) = a3;
                v74[0].StaticBitmap[7] = (unsigned __int64)Object;
                v74[0].StaticBitmap[8] = (unsigned __int64)v42;
                LODWORD(v74[0].StaticBitmap[9]) = DesiredAccess;
                v74[0].StaticBitmap[10] = (unsigned __int64)v50;
                v74[0].StaticBitmap[14] = (unsigned __int64)v17;
                v53.m128i_i64[0] = (__int64)&v74[0].StaticBitmap[3];
                v53.m128i_i64[1] = (__int64)v52[0];
                LOBYTE(v54) = a11;
                v19 = CmpCallCallBacksEx(
                        0x20u,
                        (__int64)&v74[0].StaticBitmap[3],
                        (__int64)&v53,
                        1,
                        0x21u,
                        0LL,
                        (__int64)v60);
              }
              if ( v19 < 0 )
              {
                if ( v19 == -1073740541 )
                {
                  v19 = 0;
                  v34 = 1;
                  goto LABEL_49;
                }
              }
              else
              {
                CmpTraceHiveLoadStart(&v61, a3);
                v40 = 1;
                if ( (a3 & 0x10) != 0 )
                  AppKey = CmLoadAppKey(
                             (int)v64,
                             (int)&v61,
                             a3,
                             0,
                             (__int64)Object,
                             (__int64)v42,
                             v17,
                             PreviousMode,
                             (__int64)&v51,
                             (__int64)BugCheckParameter2);
                else
                  AppKey = CmLoadKey(
                             (__int64)v64,
                             &v61,
                             a3,
                             0LL,
                             (__int64)Object,
                             (__int64)v52[0],
                             a11,
                             v42,
                             (__int64)v17,
                             PreviousMode,
                             (__int64)&v51,
                             BugCheckParameter2);
                v19 = AppKey;
                if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v60[0] != v60 )
                {
                  v72 = 0LL;
                  v73 = 0LL;
                  v70[0] = v32;
                  v70[1] = (unsigned int)v19;
                  v71 = (unsigned int)v19;
                  v70[2] = &v74[0].StaticBitmap[3];
                  v63[0] = v70;
                  v63[1] = &v53;
                  CmpCallCallBacksEx(0x21u, (__int64)v70, (__int64)v63, 0, 0x21u, (__int64)v32, (__int64)v60);
                  v19 = v71;
                }
              }
              v34 = 0;
LABEL_49:
              if ( v32 )
                ObfDereferenceObject(v32);
              if ( Object )
              {
                ObfDereferenceObject(Object);
                Object = 0LL;
              }
              if ( v19 >= 0 && v45 && !v34 )
              {
                v44 = 0LL;
                v35 = v74[0].StaticBitmap[15];
                if ( (a3 & 0x10) != 0 )
                  v35 = 64;
                LODWORD(v74[0].StaticBitmap[15]) = v35;
                p_DestinationString = v51;
                if ( !v51 )
                {
                  p_DestinationString = (__int64)&DestinationString;
                  v51 = (__int64)&DestinationString;
                }
                v19 = ObReferenceObjectByName(
                        p_DestinationString,
                        64LL,
                        0LL,
                        0,
                        (__int64)CmKeyObjectType,
                        0,
                        (__int64)&v74[0].StaticBitmap[15],
                        (PADAPTER_OBJECT *)&v44);
                if ( v19 >= 0 )
                {
                  v37 = v44;
                  ObDeleteCapturedInsertInfo(v44);
                  v19 = ObOpenObjectByPointer(
                          v37,
                          PreviousMode != 0 ? 64 : 576,
                          0LL,
                          DesiredAccess,
                          (POBJECT_TYPE)CmKeyObjectType,
                          PreviousMode,
                          &Handle);
                  ObfDereferenceObject(v37);
                  if ( v19 >= 0 )
                    *v50 = Handle;
                }
                if ( BugCheckParameter2[0] )
                {
                  if ( (a3 & 0x10) != 0 )
                  {
                    CmReleaseLoadKeyContext(BugCheckParameter2[0]);
                  }
                  else
                  {
                    CmpLockRegistry(BugCheckParameter2[0]);
                    CmpDereferenceKeyControlBlock(BugCheckParameter2[0]);
                    CmpUnlockRegistry(v39);
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
        else if ( !v50 )
        {
          if ( v44 )
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
    CmReleaseLoadKeyContext(BugCheckParameter2[0]);
  if ( v51 && (UNICODE_STRING *)v51 != &DestinationString )
    CmpFreeTransientPoolWithTag((void *)v51, 0x624E4D43u);
  if ( v57 )
    ZwClose(v57);
  if ( v41 )
    KeLeaveCriticalRegion();
  if ( v58 )
    ObfDereferenceObject(v58);
  if ( v52[0] )
    ObfDereferenceObject(v52[0]);
  if ( v16 )
    ObfDereferenceObject(v16);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v61.Buffer )
    ExFreePoolWithTag(v61.Buffer, 0);
  CmpCleanupParseContext(&v74[0].StaticBitmap[15], 0LL);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( v15 )
    CmpTraceHiveLoadStop((unsigned int)v19);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)v74);
  return (unsigned int)v19;
}
