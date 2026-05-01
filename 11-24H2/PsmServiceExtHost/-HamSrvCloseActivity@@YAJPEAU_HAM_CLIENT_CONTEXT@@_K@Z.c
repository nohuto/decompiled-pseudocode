/*
 * XREFs of ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18001997C
 * Callers:
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180037F7C (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     HamRpcSrvCloseActivity @ 0x18006A030 (HamRpcSrvCloseActivity.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180018200 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x18001A700 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18001B770 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvCloseActivity(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // r15d
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbx
  int v9; // esi
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  int v13; // ebx
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR v18; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+100h] [rbp+0h] BYREF
  void *v22; // [rsp+110h] [rbp+10h]
  int v23; // [rsp+118h] [rbp+18h]
  int v24; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp+20h] BYREF
  void *v26; // [rsp+130h] [rbp+30h]
  int v27; // [rsp+138h] [rbp+38h]
  int v28; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v29; // [rsp+140h] [rbp+40h]
  int v30; // [rsp+148h] [rbp+48h]
  int v31; // [rsp+14Ch] [rbp+4Ch]
  __int64 *v32; // [rsp+150h] [rbp+50h]
  int v33; // [rsp+158h] [rbp+58h]
  int v34; // [rsp+15Ch] [rbp+5Ch]

  v2 = a2;
  v15 = a2;
  memset_0(v20, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    *(_DWORD *)&v18.Level = 260;
    v21.Ptr = (ULONGLONG)off_1800E82B8;
    *(_DWORD *)&v18.Id = 184549376;
    v18.Keyword = 64LL;
    v21.Size = *(unsigned __int16 *)off_1800E82B8;
    v22 = &unk_1800D57E2;
    v21.Reserved = 2;
    v23 = 18;
    v24 = 1;
    EventWriteTransfer(RegHandle, &v18, 0LL, 0LL, 2u, &v21);
  }
  if ( HampLockTrackerId != -1 && TlsGetValue(HampLockTrackerId) )
  {
    v4 = 0;
  }
  else
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
    v4 = 1;
  }
  if ( HampClientIsActive(a1) )
  {
    v5 = *((unsigned __int8 *)a1 + 164);
    v16 = v2;
    v6 = (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 48 * v5 + 424;
    v7 = (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 48 * v5 + 440;
    RtlAcquireSRWLockShared(v7);
    v8 = *(_QWORD *)v6;
    v9 = *(_BYTE *)(v6 + 8) & 1;
    if ( (*(_BYTE *)(v6 + 8) & 1) == 0 )
      goto LABEL_14;
    if ( v8 )
    {
      v8 ^= v6;
LABEL_14:
      while ( v8 )
      {
        v10 = HampActCompareByHandle(&v16, (void *)v8);
        if ( v10 < 0 )
        {
          v11 = *(_QWORD *)v8;
        }
        else
        {
          if ( v10 <= 0 )
            break;
          v11 = *(_QWORD *)(v8 + 8);
        }
        if ( v9 && v11 )
          v8 ^= v11;
        else
          v8 = v11;
      }
    }
    v12 = v8;
    if ( v8 )
    {
      if ( *(_QWORD *)(v8 + 24) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24)) <= 1 )
          __fastfail(0xEu);
      }
      else
      {
        v12 = 0LL;
      }
    }
    RtlReleaseSRWLockShared(v7);
    if ( v12 )
    {
      if ( *(struct _HAM_CLIENT_CONTEXT **)(v12 + 64) == a1 )
      {
        v13 = HampActClose((struct _HAM_ACTIVITY *)v12);
        if ( v13 >= 0 )
          v13 = 0;
        CemRcObjectDereference((_QWORD *)v12);
        goto LABEL_26;
      }
      CemRcObjectDereference((_QWORD *)v12);
    }
    v13 = -1073741275;
LABEL_26:
    v2 = v15;
    goto LABEL_27;
  }
  v13 = -1073741661;
LABEL_27:
  if ( v4 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v34 = 0;
    v31 = 0;
    v32 = &v17;
    v33 = 8;
    v29 = &v15;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E82B8;
    EventDescriptor.Keyword = 8LL;
    v17 = v2;
    LODWORD(v15) = v13;
    v30 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E82B8;
    v26 = &unk_1800D5345;
    UserData.Reserved = 2;
    v27 = 39;
    v28 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (unsigned int)v13;
}
