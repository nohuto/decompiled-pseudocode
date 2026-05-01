/*
 * XREFs of ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x1800183C8
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18003A570 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180008BC0 (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180018940 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E464 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?erase@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@@Z @ 0x18005DE24 (-erase@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@R.c)
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18005DFC4 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005FA88 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnApplicationTerminated(
        ExecutionModel::ResourceManager *this,
        struct _RM_PSM_HOST_INFO *a2)
{
  __int64 v4; // r13
  struct _RM_HAM_ACTIVITY_HOST *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // r13d
  __int64 v10; // r12
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // r13
  __int64 v22; // rdx
  __int64 *Value; // rax
  __int64 v24; // rdx
  __int64 v26; // rdx
  __int64 v27; // [rsp+30h] [rbp-D0h]
  __int64 v28; // [rsp+38h] [rbp-C8h]
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  __int64 v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR v34; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v36[8]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+98h] [rbp-68h] BYREF
  void *v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+B4h] [rbp-4Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v42; // [rsp+D0h] [rbp-30h]
  int v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DCh] [rbp-24h]
  struct _RM_PSM_HOST_INFO *v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+ECh] [rbp-14h]
  int *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  __int64 *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]

  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
  {
    *(_DWORD *)&v34.Level = 260;
    v37.Ptr = (ULONGLONG)off_1800E8280;
    v34.Keyword = 1LL;
    *(_DWORD *)&v34.Id = 184549376;
    v37.Size = *(unsigned __int16 *)off_1800E8280;
    v38 = &unk_1800D7939;
    v37.Reserved = 2;
    v40 = 1;
    v39 = 33;
    EventWriteTransfer(qword_1800E8298, &v34, 0LL, 0LL, 2u, &v37);
  }
  v4 = *((_QWORD *)a2 + 68);
  v5 = 0LL;
  P = 0LL;
  v32 = v4;
  v27 = v4;
  RmpAcquireGlobalLock();
  v6 = 0LL;
  v28 = *((_QWORD *)this + 16);
  RtlAcquireSRWLockShared(v28 + 32);
  v7 = 0LL;
  v8 = (unsigned __int8)v4 + 11623883LL;
  v9 = -1073741275;
  v10 = -1LL;
  v11 = -1LL << (*(_DWORD *)(v28 + 20) & 0x1F);
  v12 = v11 & (HIBYTE(v27)
             + 37
             * (BYTE6(v27)
              + 37
              * (BYTE5(v27) + 37 * (BYTE4(v27) + 37 * (BYTE3(v27) + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * v8)))))));
LABEL_3:
  if ( v7 )
    goto LABEL_6;
  v13 = v28;
  v14 = *(_DWORD *)(v28 + 20) >> 5;
  if ( v14 )
  {
    v7 = *(_QWORD *)(v28 + 24)
       + 8LL
       * ((37
         * (BYTE6(v12)
          + 37
          * (BYTE5(v12)
           + 37
           * (BYTE4(v12)
            + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))
         + HIBYTE(v12)) & (unsigned int)(v14 - 1));
LABEL_6:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v12 == (v11 & *(_QWORD *)(v7 + 8)) )
      {
        if ( v7 )
        {
          if ( v32 != *(_QWORD *)(v7 + 32) )
            goto LABEL_3;
          v9 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 16)) <= 1 )
            __fastfail(0xEu);
          v6 = v7;
        }
        break;
      }
    }
    v13 = v28;
  }
  RtlReleaseSRWLockShared(v13 + 32);
  if ( v9 >= 0 )
  {
    P = (PVOID)v6;
    v5 = (struct _RM_HAM_ACTIVITY_HOST *)(v6 + 64);
    RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v6 + 64));
    RmpReleaseGlobalLock();
    HampHostCheckNotifyZeroProcess((struct _RM_HAM_ACTIVITY_HOST *)(v6 + 64));
    RmpAcquireGlobalLock();
    RmpActivityHostZeroProcessNotification((struct _RM_ACTIVITY_HOST *)v6);
  }
  if ( *((_QWORD *)this + 23) )
  {
    v16 = utl::hash<_RM_PSM_HOST_INFO>::operator()(v15, a2);
    LOBYTE(v17) = *((_BYTE *)this + 200);
    v18 = v16;
    v19 = *((_QWORD *)this + 23) + 16 * (v16 & ((8LL << v17) - 1));
    v20 = *(_QWORD **)v19;
    if ( *(_QWORD *)v19 )
    {
      v21 = **(_QWORD ***)(v19 + 8);
      while ( v20 != v21 )
      {
        if ( v20[2] >= v18 )
        {
          if ( v20[2] > v18 )
            break;
          if ( (unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v17, a2, v20 + 3) )
          {
            if ( v20 != (_QWORD *)((char *)this + 168) )
            {
              NtDeleteWnfStateName(v20 + 72, v26);
              NtDeleteWnfStateName(v20 + 73, v22);
              utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::erase(
                (char *)this + 168,
                v36,
                v20);
            }
            break;
          }
        }
        v20 = (_QWORD *)*v20;
      }
    }
  }
  dword_1800EA308 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v24 = *Value;
    if ( (*Value & 1) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[1]-- == 1 )
      *Value = v24 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  if ( P )
    RmpObjectRelease(P);
  if ( v5 )
    RmHamHostDereference(v5);
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 9) != 0 && (qword_1800E8290 & 9) == qword_1800E8290 )
  {
    v33 = v32;
    v29 = *((_DWORD *)a2 + 133);
    v30 = *((_DWORD *)a2 + 134);
    v52 = &v33;
    v50 = &v29;
    v48 = &v30;
    v53 = 8LL;
    v51 = 4LL;
    v49 = 4LL;
    do
      ++v10;
    while ( *((_WORD *)a2 + v10) );
    v45 = a2;
    v46 = 2 * v10 + 2;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E8280;
    v47 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800E8280;
    v42 = &unk_1800D7B39;
    UserData.Reserved = 2;
    v43 = 73;
    v44 = 1;
    EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
}
