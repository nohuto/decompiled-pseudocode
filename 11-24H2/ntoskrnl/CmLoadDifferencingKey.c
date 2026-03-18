/*
 * XREFs of CmLoadDifferencingKey @ 0x14092C750
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14092A57C (VrpLoadDifferencingHive.c)
 *     NtLoadKeyEx @ 0x14092C6E0 (NtLoadKeyEx.c)
 *     VrpPreLoadKey @ 0x140A73F7C (VrpPreLoadKey.c)
 *     NtLoadKey2 @ 0x140A8FBC0 (NtLoadKey2.c)
 *     NtLoadKey3 @ 0x140A95260 (NtLoadKey3.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x14041EE80 (CmpIsRegistryLockAcquired.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404590C0 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByName @ 0x14083F230 (ObReferenceObjectByName.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpCallCallBacksEx @ 0x140847D10 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     CmLoadKey @ 0x14092B788 (CmLoadKey.c)
 *     CmpInitializeParseContext @ 0x14092D400 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 *     CmpTraceHiveLoadStop @ 0x14092D590 (CmpTraceHiveLoadStop.c)
 *     CmCheckNoTxContext @ 0x14092D620 (CmCheckNoTxContext.c)
 *     CmpNameFromAttributes @ 0x14092D668 (CmpNameFromAttributes.c)
 *     CmConvertHandleToKernelHandle @ 0x14092D980 (CmConvertHandleToKernelHandle.c)
 *     ObDeleteCapturedInsertInfo @ 0x14092DA30 (ObDeleteCapturedInsertInfo.c)
 *     CmpTraceHiveLoadStart @ 0x14092DAD8 (CmpTraceHiveLoadStart.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x14092E838 (CmReleaseLoadKeyContext.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x140BB9350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BB9AD0 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BB9B10 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
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
  int AppKey; // eax
  char v33; // r13
  int v34; // eax
  __int64 p_DestinationString; // rcx
  PVOID v36; // rbx
  __int64 v38; // rcx
  char v39; // [rsp+60h] [rbp-408h]
  char v40; // [rsp+62h] [rbp-406h]
  struct _KEVENT *v41; // [rsp+68h] [rbp-400h]
  char UnloadRundown; // [rsp+70h] [rbp-3F8h]
  PVOID v43; // [rsp+78h] [rbp-3F0h] BYREF
  int v44; // [rsp+80h] [rbp-3E8h]
  int v45; // [rsp+84h] [rbp-3E4h]
  PVOID Object; // [rsp+88h] [rbp-3E0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+90h] [rbp-3D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-3C8h] BYREF
  HANDLE *v49; // [rsp+B0h] [rbp-3B8h]
  __int64 v50; // [rsp+B8h] [rbp-3B0h] BYREF
  PVOID v51[2]; // [rsp+C0h] [rbp-3A8h] BYREF
  __m128i v52; // [rsp+D0h] [rbp-398h] BYREF
  __int64 v53; // [rsp+E0h] [rbp-388h]
  int v54; // [rsp+F0h] [rbp-378h]
  unsigned int v55; // [rsp+F8h] [rbp-370h]
  HANDLE v56; // [rsp+100h] [rbp-368h] BYREF
  PVOID v57; // [rsp+108h] [rbp-360h]
  PPRIVILEGE_SET Privileges; // [rsp+110h] [rbp-358h]
  _QWORD v59[2]; // [rsp+118h] [rbp-350h] BYREF
  UNICODE_STRING v60; // [rsp+128h] [rbp-340h] BYREF
  HANDLE Handle; // [rsp+138h] [rbp-330h] BYREF
  HANDLE v62[2]; // [rsp+140h] [rbp-328h] BYREF
  HANDLE v63[2]; // [rsp+150h] [rbp-318h] BYREF
  __int128 v64; // [rsp+160h] [rbp-308h]
  __int128 v65; // [rsp+170h] [rbp-2F8h]
  int v66; // [rsp+180h] [rbp-2E8h]
  __int64 v67; // [rsp+188h] [rbp-2E0h]
  __int64 v68; // [rsp+190h] [rbp-2D8h]
  _QWORD v69[3]; // [rsp+198h] [rbp-2D0h] BYREF
  __int64 v70; // [rsp+1B0h] [rbp-2B8h]
  __int128 v71; // [rsp+1B8h] [rbp-2B0h]
  __int64 v72; // [rsp+1C8h] [rbp-2A0h]
  _KAFFINITY_EX v73[2]; // [rsp+1D0h] [rbp-298h] BYREF

  v52.m128i_i64[0] = a2;
  v49 = a8;
  v55 = a3;
  v67 = a5;
  v43 = a6;
  v68 = a10;
  v62[0] = a12;
  memset(v73, 0, 24);
  *(_OWORD *)v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  DestinationString = 0LL;
  v60 = 0LL;
  v50 = 0LL;
  memset_0(&v73[0].StaticBitmap[15], 0, 0x1D0uLL);
  Handle = 0LL;
  v66 = 0;
  v15 = 0;
  CmpInitializeThreadInfo(v73);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v40 = 0;
  RtlInitUnicodeString(&v60, 0LL);
  Object = 0LL;
  BugCheckParameter2[0] = 0LL;
  v51[0] = 0LL;
  v56 = 0LL;
  v16 = 0LL;
  v41 = 0LL;
  Privileges = 0LL;
  CmpInitializeParseContext(&v73[0].StaticBitmap[15]);
  v17 = 0LL;
  v57 = 0LL;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
  {
    v39 = 0;
    if ( (a3 & 0xFFFF000B) != 0 || a10 && (a3 & 0xFFFF9EFF) != 0 )
      goto LABEL_114;
    if ( !a11 )
    {
LABEL_5:
      if ( (a3 & 0x1000) == 0 || (a3 & 0x600) == 0x600 )
      {
        v44 = a3 & 0x810;
        v19 = CmCheckNoTxContext();
        if ( v19 < 0 )
          goto LABEL_67;
        v54 = a3 & 0x10;
        if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
        {
          v19 = -1073741727;
          goto LABEL_103;
        }
        if ( v44 )
        {
          if ( v49 )
          {
            if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
            {
              v19 = -1073741583;
              goto LABEL_103;
            }
LABEL_11:
            LOBYTE(v18) = PreviousMode;
            v19 = CmpNameFromAttributes(v52.m128i_i64[0], v18, &v60);
            v45 = v19;
            if ( v19 >= 0 )
            {
              if ( PreviousMode == 1 )
              {
                if ( (a1 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v44 )
                {
                  v28 = 0x7FFFFFFF0000LL;
                  if ( (unsigned __int64)v49 < 0x7FFFFFFF0000LL )
                    v28 = (__int64)v49;
                  *(_QWORD *)v28 = 0LL;
                }
              }
              *(_OWORD *)v63 = *(_OWORD *)a1;
              v64 = *(_OWORD *)(a1 + 16);
              v65 = *(_OWORD *)(a1 + 32);
              if ( (a3 & 0x10) != 0 && v63[1] )
              {
                v19 = -1073741585;
                v45 = -1073741585;
                v16 = 0LL;
                v15 = 0;
                goto LABEL_67;
              }
              if ( PreviousMode == 1 )
              {
                v52 = 0LL;
                v26 = v64;
                if ( (unsigned __int64)v64 >= 0x7FFFFFFF0000LL )
                  v26 = 0x7FFFFFFF0000LL;
                v52.m128i_i32[0] = *(_DWORD *)v26;
                v27 = *(_QWORD *)(v26 + 8);
                v52.m128i_i64[1] = v27;
                DestinationString = (UNICODE_STRING)v52;
                if ( (unsigned __int16)_mm_cvtsi128_si32(v52) && (v27 & 1) != 0 )
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
                  v45 = -1073741670;
                  v16 = 0LL;
                  v15 = 0;
                  goto LABEL_67;
                }
                v22 = (wchar_t *)TransientPoolWithQuota;
                memmove(TransientPoolWithQuota, DestinationString.Buffer, Length);
                DestinationString.Length = Length;
                DestinationString.MaximumLength = Length;
                DestinationString.Buffer = v22;
                v17 = (struct _OBJECT_HANDLE_INFORMATION *)v57;
              }
              else
              {
                RtlInitUnicodeString(&DestinationString, 0LL);
              }
              *(_QWORD *)&v64 = &DestinationString;
              *(_QWORD *)&v65 = 0LL;
              if ( v67 )
              {
                LOBYTE(v25) = PreviousMode;
                v19 = CmObReferenceObjectByHandle(v67, 0, v24, v25, (__int64)&Object, 0LL);
                if ( v19 < 0 )
                {
                  v16 = 0LL;
                  v15 = 0;
                  goto LABEL_67;
                }
              }
              v29 = v43;
              if ( v43 )
              {
                v43 = 0LL;
                v19 = ObReferenceObjectByHandle(v29, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v43, 0LL);
                v41 = (struct _KEVENT *)v43;
                if ( v19 < 0 )
                {
                  v16 = v43;
                  goto LABEL_66;
                }
              }
              if ( v68 )
              {
                LOBYTE(v25) = PreviousMode;
                v19 = CmObReferenceObjectByHandle(v68, 0, v24, v25, (__int64)v51, 0LL);
                if ( v19 < 0 )
                  goto LABEL_65;
              }
              if ( v62[0] )
              {
                v43 = 0LL;
                v19 = ObReferenceObjectByHandle(v62[0], 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v43, 0LL);
                v17 = (struct _OBJECT_HANDLE_INFORMATION *)v43;
                v57 = v43;
                if ( v19 < 0 )
                  goto LABEL_65;
                if ( *((_DWORD *)v43 + 48) != 2 )
                {
                  v19 = -1073741656;
                  goto LABEL_65;
                }
              }
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v40 = 1;
              LOBYTE(v24) = PreviousMode;
              v19 = CmConvertHandleToKernelHandle(v63[1], v23, v24, 131097LL, &v56);
              if ( v19 < 0 )
              {
LABEL_65:
                v16 = v41;
LABEL_66:
                v15 = v39;
                goto LABEL_67;
              }
              v63[1] = v56;
              v31 = 0LL;
              memset_0(&v73[0].StaticBitmap[3], 0, 0x60uLL);
              v52 = 0LL;
              v53 = 0LL;
              v59[1] = v59;
              v59[0] = v59;
              if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
              {
                if ( v63[1] )
                {
                  v43 = 0LL;
                  ObReferenceObjectByHandle(v63[1], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v43, 0LL);
                  v31 = v43;
                }
                v73[0].StaticBitmap[13] = 2LL;
                v73[0].StaticBitmap[3] = (unsigned __int64)v31;
                v73[0].StaticBitmap[4] = (unsigned __int64)&DestinationString;
                v73[0].StaticBitmap[5] = (unsigned __int64)&v60;
                LODWORD(v73[0].StaticBitmap[6]) = a3;
                v73[0].StaticBitmap[7] = (unsigned __int64)Object;
                v73[0].StaticBitmap[8] = (unsigned __int64)v41;
                LODWORD(v73[0].StaticBitmap[9]) = DesiredAccess;
                v73[0].StaticBitmap[10] = (unsigned __int64)v49;
                v73[0].StaticBitmap[14] = (unsigned __int64)v17;
                v52.m128i_i64[0] = (__int64)&v73[0].StaticBitmap[3];
                v52.m128i_i64[1] = (__int64)v51[0];
                LOBYTE(v53) = a11;
                v19 = CmpCallCallBacksEx(
                        0x20u,
                        (__int64)&v73[0].StaticBitmap[3],
                        (__int64)&v52,
                        1,
                        0x21u,
                        0LL,
                        (__int64)v59);
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
                CmpTraceHiveLoadStart(&v60, a3);
                v39 = 1;
                if ( (a3 & 0x10) != 0 )
                  AppKey = CmLoadAppKey(
                             (int)v63,
                             (int)&v60,
                             a3,
                             0,
                             (__int64)Object,
                             (__int64)v41,
                             v17,
                             PreviousMode,
                             (__int64)&v50,
                             (__int64)BugCheckParameter2);
                else
                  AppKey = CmLoadKey(
                             (__int64)v63,
                             &v60,
                             a3,
                             0LL,
                             (__int64)Object,
                             (__int64)v51[0],
                             a11,
                             v41,
                             (__int64)v17,
                             PreviousMode,
                             (__int64)&v50,
                             BugCheckParameter2);
                v19 = AppKey;
                if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v59[0] != v59 )
                {
                  v71 = 0LL;
                  v72 = 0LL;
                  v69[0] = v31;
                  v69[1] = (unsigned int)v19;
                  v70 = (unsigned int)v19;
                  v69[2] = &v73[0].StaticBitmap[3];
                  v62[0] = v69;
                  v62[1] = &v52;
                  CmpCallCallBacksEx(0x21u, (__int64)v69, (__int64)v62, 0, 0x21u, (__int64)v31, (__int64)v59);
                  v19 = v70;
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
              if ( v19 >= 0 && v44 && !v33 )
              {
                v43 = 0LL;
                v34 = v73[0].StaticBitmap[15];
                if ( (a3 & 0x10) != 0 )
                  v34 = 64;
                LODWORD(v73[0].StaticBitmap[15]) = v34;
                p_DestinationString = v50;
                if ( !v50 )
                {
                  p_DestinationString = (__int64)&DestinationString;
                  v50 = (__int64)&DestinationString;
                }
                v19 = ObReferenceObjectByName(
                        p_DestinationString,
                        64LL,
                        0LL,
                        0,
                        (__int64)CmKeyObjectType,
                        0,
                        (__int64)&v73[0].StaticBitmap[15],
                        (PADAPTER_OBJECT *)&v43);
                if ( v19 >= 0 )
                {
                  v36 = v43;
                  ObDeleteCapturedInsertInfo(v43);
                  v19 = ObOpenObjectByPointer(
                          v36,
                          PreviousMode != 0 ? 64 : 576,
                          0LL,
                          DesiredAccess,
                          (POBJECT_TYPE)CmKeyObjectType,
                          PreviousMode,
                          &Handle);
                  ObfDereferenceObject(v36);
                  if ( v19 >= 0 )
                    *v49 = Handle;
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
                    CmpUnlockRegistry(v38);
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
        else if ( !v49 )
        {
          if ( v43 )
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
  if ( v50 && (UNICODE_STRING *)v50 != &DestinationString )
    CmpFreeTransientPoolWithTag((void *)v50, 0x624E4D43u);
  if ( v56 )
    ZwClose(v56);
  if ( v40 )
    KeLeaveCriticalRegion();
  if ( v57 )
    ObfDereferenceObject(v57);
  if ( v51[0] )
    ObfDereferenceObject(v51[0]);
  if ( v16 )
    ObfDereferenceObject(v16);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v60.Buffer )
    ExFreePoolWithTag(v60.Buffer, 0);
  CmpCleanupParseContext(&v73[0].StaticBitmap[15], 0LL);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( v15 )
    CmpTraceHiveLoadStop((unsigned int)v19);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)v73);
  return (unsigned int)v19;
}
