/*
 * XREFs of PopDiagTracePowerRequestCreate @ 0x140A3277C
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140425C44 (PopPowerRequestCreateCommon.c)
 *     PopDiagTraceControlCallback @ 0x140A32540 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     PoStoreRequester @ 0x140425FC4 (PoStoreRequester.c)
 *     Feature_2395269435__private_IsEnabledDeviceUsageNoInline @ 0x1405C87C4 (Feature_2395269435__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopGetCallerContextFromBuffer @ 0x140A34C60 (PopGetCallerContextFromBuffer.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerRequestCreate(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v3; // rdx
  __int64 v4; // rcx
  __int64 Pool2; // rax
  _DWORD *v6; // rdi
  __int64 v7; // rbx
  int SessionId; // eax
  unsigned __int16 v9; // dx
  unsigned int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  ULONG v20; // r9d
  __int16 v21; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+5Ch] [rbp-A4h] BYREF
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+64h] [rbp-9Ch] BYREF
  int v33; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v35[2]; // [rsp+78h] [rbp-88h] BYREF
  char *v36; // [rsp+80h] [rbp-80h]
  __int128 v37; // [rsp+88h] [rbp-78h] BYREF
  __int128 v38; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  int *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  int *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  int *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  int *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  int *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  int *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  int *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  __int64 v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  __int64 v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  __int64 v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  __int16 *v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  __int16 *v62; // [rsp+170h] [rbp+70h]
  __int64 v63; // [rsp+178h] [rbp+78h]
  __int64 v64; // [rsp+180h] [rbp+80h]
  int v65; // [rsp+188h] [rbp+88h]
  int v66; // [rsp+18Ch] [rbp+8Ch]
  char v67; // [rsp+200h] [rbp+100h] BYREF

  v24 = a2;
  v21 = 0;
  v37 = 0LL;
  v22 = 0;
  v38 = 0LL;
  v35[1] = 0;
  if ( PopDiagHandleRegistered )
  {
    v3 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
    if ( a1 )
      v3 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v3) )
    {
      v34 = 0LL;
      v35[0] = 1441792;
      v25 = **(_DWORD **)(v24 + 96);
      v26 = 0;
      v23 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v33 = 0;
      v32 = 0;
      v31 = 0;
      v4 = *(_QWORD *)(v24 + 96);
      v36 = &v67;
      PoStoreRequester(v4, 0LL, &v34, 0);
      Pool2 = ExAllocatePool2(0x100uLL);
      v6 = (_DWORD *)Pool2;
      if ( Pool2 )
      {
        if ( (int)PoStoreRequester(*(_QWORD *)(v24 + 96), Pool2, &v34, 0) >= 0 )
        {
          PopGetCallerContextFromBuffer(v6, v35, &v37, &v38);
          if ( v25 )
          {
            v26 = v6[6];
            v7 = v24;
            if ( (unsigned int)Feature_2395269435__private_IsEnabledDeviceUsageNoInline() )
              SessionId = *(_DWORD *)(v24 + 16);
            else
              SessionId = PsGetSessionIdEx(*(_QWORD *)(*(_QWORD *)(v24 + 96) + 8LL));
            v23 = SessionId;
          }
          else
          {
            v7 = v24;
          }
          if ( !*(_QWORD *)(v7 + 96) )
            v27 = 1;
          if ( (*(_DWORD *)(v7 + 20) & 2) != 0 )
            v28 = 1;
          if ( (*(_DWORD *)(v7 + 20) & 1) != 0 )
            v29 = 1;
          if ( (*(_DWORD *)(v7 + 20) & 4) != 0 )
            v30 = 1;
          if ( (*(_DWORD *)(v7 + 20) & 8) != 0 )
            v31 = 1;
          if ( (*(_DWORD *)(v7 + 20) & 0x10) != 0 )
            v32 = 1;
          if ( (*(_DWORD *)(v7 + 20) & 0x20) != 0 )
            v33 = 1;
          UserData.Ptr = (ULONGLONG)&v24;
          v40 = &v25;
          v42 = &v26;
          v44 = &v23;
          v46 = &v27;
          v48 = &v28;
          v50 = &v29;
          v52 = &v30;
          v54 = v7 + 44;
          v56 = v7 + 40;
          v58 = v7 + 48;
          v9 = (unsigned __int16)v38 >> 1;
          v60 = &v21;
          v61 = 2LL;
          v63 = 2LL;
          v10 = 13;
          v62 = &v22;
          v21 = (unsigned __int16)v37 >> 1;
          v22 = (unsigned __int16)v38 >> 1;
          *(_QWORD *)&UserData.Size = 8LL;
          v41 = 4LL;
          v43 = 4LL;
          v45 = 4LL;
          v47 = 4LL;
          v49 = 4LL;
          v51 = 4LL;
          v53 = 4LL;
          v55 = 4LL;
          v57 = 4LL;
          v59 = 4LL;
          if ( (unsigned __int16)v37 >> 1 )
          {
            v10 = 14;
            v64 = *((_QWORD *)&v37 + 1);
            v66 = 0;
            v65 = 2 * ((unsigned __int16)v37 >> 1);
          }
          if ( v9 )
          {
            v11 = 2LL * v10;
            *(&UserData.Ptr + v11) = *((_QWORD *)&v38 + 1);
            *(&UserData.Reserved + 2 * v11) = 0;
            *(&UserData.Size + 2 * v11) = 2 * v9;
            ++v10;
          }
          v12 = 2LL * v10;
          v13 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
          *(&UserData.Ptr + v12) = (ULONGLONG)&v31;
          *((_QWORD *)&UserData.Size + v12) = 4LL;
          v14 = v10 + 1;
          v15 = v10 + 2;
          v14 *= 2LL;
          *(&UserData.Ptr + v14) = (ULONGLONG)&v32;
          *((_QWORD *)&UserData.Size + v14) = 4LL;
          v16 = 2LL * v15;
          *(&UserData.Ptr + v16) = (ULONGLONG)&v33;
          *((_QWORD *)&UserData.Size + v16) = 4LL;
          v17 = v15 + 1;
          v15 += 2;
          v17 *= 2LL;
          *(&UserData.Ptr + v17) = v7 + 52;
          *((_QWORD *)&UserData.Size + v17) = 4LL;
          v18 = 2LL * v15;
          *(&UserData.Ptr + v18) = v7 + 56;
          *((_QWORD *)&UserData.Size + v18) = 4LL;
          v19 = v15 + 1;
          v20 = v15 + 2;
          v19 *= 2LL;
          *(&UserData.Ptr + v19) = v7 + 60;
          *((_QWORD *)&UserData.Size + v19) = 4LL;
          if ( !a1 )
            v13 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
          EtwWrite(PopDiagHandle, v13, 0LL, v20, &UserData);
        }
        ExFreePoolWithTag(v6, 0x50455654u);
      }
    }
  }
}
