/*
 * XREFs of ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180019494
 * Callers:
 *     HamRpcSrvUpdateActivityProperties @ 0x18006C1A0 (HamRpcSrvUpdateActivityProperties.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180018200 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x18001A700 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180034918 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvUpdateActivityProperties(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a3)
{
  __int64 v3; // rsi
  DWORD v6; // ebx
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r14
  int v13; // esi
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rbx
  int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdi
  int updated; // ebx
  DWORD v20; // edi
  int v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR v29; // [rsp+68h] [rbp-98h] BYREF
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  void *v32; // [rsp+120h] [rbp+20h]
  int v33; // [rsp+128h] [rbp+28h]
  int v34; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+130h] [rbp+30h] BYREF
  void *v36; // [rsp+140h] [rbp+40h]
  int v37; // [rsp+148h] [rbp+48h]
  int v38; // [rsp+14Ch] [rbp+4Ch]
  __int64 *v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  __int64 *v41; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]
  int *v43; // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]
  int *v45; // [rsp+180h] [rbp+80h]
  __int64 v46; // [rsp+188h] [rbp+88h]

  v3 = a2;
  v23 = a2;
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E82B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E82B8;
    v32 = &unk_1800D5AC7;
    UserData.Reserved = 2;
    v33 = 29;
    v34 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  memset_0(TlsValue, 0, 0x88uLL);
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v6, TlsValue);
  }
  v7 = *(_DWORD *)a3;
  v22 = *(_DWORD *)a3;
  if ( (*(_DWORD *)a3 & 0xFFF0) != 0 || HIWORD(v7) >= 8u )
    goto LABEL_56;
  if ( HampClientIsActive(a1) )
  {
    if ( (v22 & 0x10000) == 0 && (v7 & 1) != 0
      || (v22 & 0x20000) == 0 && (v7 & 6) != 0
      || (v22 & 0x40000) == 0 && (v7 & 8) != 0
      || (v7 & 6u) >= 6
      || (v8 = *((_DWORD *)a3 + 1), (v8 & 1) == 0) && v8
      || (v8 & 0xF000) != 0
      || ((v8 & 0xE) == 0) != ((v8 & 0x30) == 0)
      || *((_BYTE *)a3 + 7)
      || (*((_BYTE *)a3 + 4) & 1) == 0 && !HIWORD(v22) )
    {
LABEL_56:
      updated = -1073741583;
      goto LABEL_43;
    }
    v9 = *((unsigned __int8 *)a1 + 164);
    v10 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    v26 = v3;
    v11 = v10 - 48 * v9 + 424;
    v12 = v11 + 16;
    RtlAcquireSRWLockShared(v11 + 16);
    v13 = *(_BYTE *)(v11 + 8) & 1;
    if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
    {
      v15 = *(_QWORD *)v11;
      if ( !*(_QWORD *)v11 )
        goto LABEL_31;
      v14 = (_QWORD *)(v15 ^ v11);
    }
    else
    {
      v14 = *(_QWORD **)v11;
    }
    v15 = (unsigned __int64)v14;
    if ( v14 )
    {
      do
      {
        v16 = HampActCompareByHandle(&v26, (void *)v15);
        if ( v16 < 0 )
        {
          v17 = *(_QWORD *)v15;
        }
        else
        {
          if ( v16 <= 0 )
            break;
          v17 = *(_QWORD *)(v15 + 8);
        }
        if ( v13 && v17 )
          v15 ^= v17;
        else
          v15 = v17;
      }
      while ( v15 );
    }
LABEL_31:
    v18 = v15;
    if ( v15 )
    {
      if ( *(_QWORD *)(v15 + 24) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24)) <= 1 )
          __fastfail(0xEu);
      }
      else
      {
        v18 = 0LL;
      }
    }
    RtlReleaseSRWLockShared(v12);
    if ( v18 )
    {
      if ( *(struct _HAM_CLIENT_CONTEXT **)(v18 + 64) == a1 )
      {
        updated = HampActUpdateProperties((struct _HAM_ACTIVITY *)v18, a3);
        if ( updated >= 0 )
          updated = 0;
        CemRcObjectDereference((_QWORD *)v18);
        goto LABEL_42;
      }
      CemRcObjectDereference((_QWORD *)v18);
    }
    updated = -1073741275;
LABEL_42:
    v3 = v23;
    goto LABEL_43;
  }
  updated = -1073741661;
LABEL_43:
  v20 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v20, 0LL);
  }
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v24 = *((_DWORD *)a3 + 1);
    v25 = *(_DWORD *)a3;
    v45 = &v24;
    v43 = &v25;
    v41 = &v27;
    v39 = &v23;
    *(_DWORD *)&v29.Level = 516;
    v35.Ptr = (ULONGLONG)off_1800E82B8;
    v46 = 4LL;
    v44 = 4LL;
    v42 = 8LL;
    v40 = 4LL;
    v29.Keyword = 8LL;
    v27 = v3;
    LODWORD(v23) = updated;
    *(_DWORD *)&v29.Id = 184549376;
    v35.Size = *(unsigned __int16 *)off_1800E82B8;
    v36 = &unk_1800D5BAD;
    v35.Reserved = 2;
    v37 = 69;
    v38 = 1;
    EventWriteTransfer(RegHandle, &v29, 0LL, 0LL, 6u, &v35);
  }
  return (unsigned int)updated;
}
