/*
 * XREFs of StorEtwRaidMiniportEvent @ 0x1400A9F58
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     StorpTelemetryMiniportEventWStr @ 0x140035200 (StorpTelemetryMiniportEventWStr.c)
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     StorEtwMiniportGetKeyword @ 0x1400A89CC (StorEtwMiniportGetKeyword.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall StorEtwRaidMiniportEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _WORD *a5,
        __int64 a6,
        int a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        _QWORD *a12)
{
  __int64 *v15; // r14
  EVENT_DESCRIPTOR v16; // xmm0
  __int64 *Unit; // rax
  __int64 v18; // rcx
  signed __int16 v19; // ax
  unsigned int v20; // ecx
  bool v21; // cc
  unsigned __int64 Keyword; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edx
  const wchar_t *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdx
  unsigned int v29; // ebx
  const wchar_t *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  const wchar_t *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  const wchar_t *v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rax
  ULONG UserDataCount; // ebx
  __int64 v42; // rcx
  __int64 v43; // rax
  ULONG v44; // ebx
  __int64 v45; // rax
  __int64 v46; // r14
  unsigned int v47; // r8d
  _QWORD *v48; // r11
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int v51; // edx
  const wchar_t *v52; // r9
  __int64 v53; // rax
  ULONG v54; // ebx
  __int64 *v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // ebx
  int v59; // [rsp+40h] [rbp-C0h] BYREF
  int v60; // [rsp+48h] [rbp-B8h] BYREF
  int v61; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h]
  __int64 v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v65; // [rsp+70h] [rbp-90h]
  _WORD *v66; // [rsp+78h] [rbp-88h]
  __int64 v67; // [rsp+80h] [rbp-80h] BYREF
  __int128 v68; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  __int128 v70; // [rsp+A8h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  int *v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+E8h] [rbp-18h]
  _WORD *v75; // [rsp+F0h] [rbp-10h]
  int v76; // [rsp+F8h] [rbp-8h]
  int v77; // [rsp+FCh] [rbp-4h]
  __int64 v78; // [rsp+100h] [rbp+0h]
  __int64 v79; // [rsp+108h] [rbp+8h]
  __int64 v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+118h] [rbp+18h]
  int *v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  char *v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+138h] [rbp+38h]
  char *v86; // [rsp+140h] [rbp+40h]
  __int64 v87; // [rsp+148h] [rbp+48h]
  __int128 *v88; // [rsp+150h] [rbp+50h]
  __int64 v89; // [rsp+158h] [rbp+58h]
  const wchar_t *v90; // [rsp+160h] [rbp+60h]
  int v91; // [rsp+168h] [rbp+68h]
  int v92; // [rsp+16Ch] [rbp+6Ch]
  const wchar_t *v93; // [rsp+170h] [rbp+70h]
  int v94; // [rsp+178h] [rbp+78h]
  int v95; // [rsp+17Ch] [rbp+7Ch]
  const wchar_t *v96; // [rsp+180h] [rbp+80h]
  int v97; // [rsp+188h] [rbp+88h]
  int v98; // [rsp+18Ch] [rbp+8Ch]

  v62 = a11;
  v66 = a5;
  v60 = a4;
  v65 = a12;
  v63 = a9;
  v15 = 0LL;
  v67 = 0LL;
  v59 = 0;
  v64 = 0LL;
  v68 = 0LL;
  EventDescriptor = 0LL;
  ActivityId = 0LL;
  v70 = 0LL;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      if ( (unsigned int)(a7 - 1) <= 1 )
      {
        if ( a9 && (byte_140171464 & 0x10) != 0 )
        {
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest2;
          }
        }
        else if ( a2 )
        {
          if ( (byte_140171464 & 0x10) == 0 )
            return 0LL;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun2;
          }
        }
        else
        {
          if ( (byte_140171464 & 0x10) == 0 )
            return 0LL;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError2;
          }
        }
      }
      else
      {
        if ( a7 != 3 )
          goto LABEL_98;
        if ( a9 && (byte_140171465 & 4) != 0 )
        {
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest2;
          }
        }
        else if ( a2 )
        {
          if ( (byte_140171465 & 4) == 0 )
            return 0LL;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun2;
          }
        }
        else
        {
          if ( (byte_140171465 & 4) == 0 )
            return 0LL;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning2;
          }
        }
      }
    }
    else
    {
      if ( a3 != 2 )
        return 3221225485LL;
      if ( (unsigned int)(a7 - 1) <= 1 )
      {
        if ( a2 )
        {
          if ( (byte_140171465 & 0x10) == 0 )
            return 0LL;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun2;
          }
        }
        else
        {
          if ( (byte_140171465 & 0x10) == 0 )
            return 0LL;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError2;
          }
        }
      }
      else
      {
        if ( a7 != 3 )
          goto LABEL_98;
        if ( a2 )
        {
          if ( (byte_140171465 & 0x20) == 0 )
            return 0LL;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun2;
          }
        }
        else
        {
          if ( (byte_140171465 & 0x20) == 0 )
            return 0LL;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning2;
          }
        }
      }
    }
  }
  else if ( a9 && StorEtwLoggingEnabled && (byte_140171463 & 0x10) != 0 )
  {
    if ( a10 > 2 )
    {
      if ( a10 > 4 )
        v16 = (EVENT_DESCRIPTOR)EventMiniportRequest8;
      else
        v16 = (EVENT_DESCRIPTOR)EventMiniportRequest4;
    }
    else
    {
      v16 = (EVENT_DESCRIPTOR)EventMiniportRequest2;
    }
  }
  else
  {
    if ( !a2 )
      goto LABEL_19;
    if ( !StorEtwLoggingEnabled )
      return 0LL;
    if ( (byte_140171463 & 0x10) != 0 )
    {
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v16 = (EVENT_DESCRIPTOR)EventMiniportLun8;
        else
          v16 = (EVENT_DESCRIPTOR)EventMiniportLun4;
      }
      else
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniportLun2;
      }
    }
    else
    {
LABEL_19:
      if ( !StorEtwLoggingEnabled || (byte_140171463 & 0x10) == 0 )
        return 0LL;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v16 = (EVENT_DESCRIPTOR)EventMiniport8;
        else
          v16 = (EVENT_DESCRIPTOR)EventMiniport4;
      }
      else
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniport2;
      }
    }
  }
  EventDescriptor = v16;
LABEL_98:
  LOWORD(v59) = -1;
  BYTE2(v59) = -1;
  if ( a2 )
  {
    if ( *(_WORD *)a2 == 1 && *(_DWORD *)(a2 + 4) >= 4u )
    {
      LOWORD(v59) = *(_WORD *)(a2 + 8);
      BYTE2(v59) = *(_BYTE *)(a2 + 10);
      Unit = RaidAdapterFindUnit(a1, v59);
      v15 = Unit;
      if ( Unit )
        v70 = *(_OWORD *)(Unit + 263);
    }
  }
  if ( (unsigned int)(a3 - 1) <= 1 && (unsigned int)(a7 - 2) <= 2 )
  {
    v18 = 2LL * (a7 - 2);
    v19 = v15
        ? _InterlockedExchangeAdd16((volatile signed __int16 *)((char *)v15 + v18 + 3528), 1u)
        : _InterlockedExchangeAdd16((volatile signed __int16 *)(v18 + a1 + 5992), 1u);
    v20 = (__int16)(v19 + 1);
    switch ( a7 )
    {
      case 2:
        v21 = v20 <= StorEtwErrorEventThrottleLimit;
        break;
      case 3:
        v21 = v20 <= StorEtwWarningEventThrottleLimit;
        break;
      case 4:
        v21 = v20 <= StorEtwInfoEventThrottleLimit;
        break;
      default:
        goto LABEL_115;
    }
    if ( !v21 )
      return 0LL;
  }
LABEL_115:
  EventDescriptor.Opcode = a8;
  EventDescriptor.Level = a7;
  Keyword = StorEtwMiniportGetKeyword(a6, EventDescriptor.Keyword);
  v23 = *(_QWORD *)(a1 + 16);
  EventDescriptor.Keyword = Keyword;
  RaidDriverGetName(v23, (__int64)&v68);
  if ( *((_QWORD *)&v68 + 1) )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_WORD *)(*((_QWORD *)&v68 + 1) + 2 * v24) );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  UserData.Size = v25;
  v26 = L"NULL";
  UserData.Reserved = 0;
  if ( *((_QWORD *)&v68 + 1) )
    v26 = (const wchar_t *)*((_QWORD *)&v68 + 1);
  v74 = 4LL;
  UserData.Ptr = (unsigned __int64)v26;
  v73 = &v60;
  if ( !v66 )
    return 3221225485LL;
  v27 = -1LL;
  do
    ++v27;
  while ( v66[v27] );
  if ( (unsigned int)(v27 - 1) > 0x3F )
    return 3221225485LL;
  v28 = v63;
  v76 = 2 * v27 + 2;
  v78 = a1 + 56;
  v80 = a1 + 5064;
  v29 = 5;
  v75 = v66;
  v77 = 0;
  v79 = 4LL;
  v81 = 16LL;
  if ( v63 || a2 )
  {
    v89 = 16LL;
    v83 = 1LL;
    v82 = &v59;
    v30 = (const wchar_t *)(v15 + 21);
    v85 = 1LL;
    v84 = (char *)&v59 + 1;
    v87 = 1LL;
    v86 = (char *)&v59 + 2;
    v88 = &v70;
    if ( v15 )
    {
      v31 = -1LL;
      do
        ++v31;
      while ( *((_BYTE *)v30 + v31) );
      v32 = v31 + 1;
    }
    else
    {
      v32 = 1;
      v30 = &word_140150F48;
    }
    v90 = v30;
    v33 = (const wchar_t *)((char *)v15 + 177);
    v91 = v32;
    v92 = 0;
    if ( v15 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( *((_BYTE *)v33 + v34) );
      v35 = v34 + 1;
    }
    else
    {
      v35 = 1;
      v33 = &word_140150F48;
    }
    v93 = v33;
    v36 = (const wchar_t *)v15 + 121;
    v94 = v35;
    v95 = 0;
    if ( v15 )
    {
      v37 = -1LL;
      do
        ++v37;
      while ( *((_BYTE *)v36 + v37) );
      v38 = v37 + 1;
    }
    else
    {
      v38 = 1;
      v36 = &word_140150F48;
    }
    v96 = v36;
    v29 = 12;
    v97 = v38;
    v98 = 0;
  }
  if ( v15 )
    v39 = *((_BYTE *)v15 + 506) & 1;
  else
    v39 = *(unsigned __int8 *)(a1 + 104) >> 7;
  v61 = v39;
  v40 = v29;
  UserDataCount = v29 + 1;
  v40 *= 2LL;
  *(&UserData.Ptr + v40) = (unsigned __int64)&v61;
  *((_QWORD *)&UserData.Size + v40) = 4LL;
  if ( v28 )
  {
    if ( *(_BYTE *)(v28 + 2) == 40 )
      v42 = *(_QWORD *)(v28 + 80);
    else
      v42 = *(_QWORD *)(v28 + 48);
    v64 = v42;
    if ( v42 )
      IoGetActivityIdIrp(v42, &ActivityId);
    v43 = 2LL * UserDataCount;
    v44 = UserDataCount + 1;
    *(&UserData.Ptr + v43) = (unsigned __int64)&v64;
    *((_QWORD *)&UserData.Size + v43) = 8LL;
    v45 = 2LL * v44;
    UserDataCount = v44 + 1;
    *(&UserData.Ptr + v45) = (unsigned __int64)&v63;
    *((_QWORD *)&UserData.Size + v45) = 8LL;
  }
  if ( 2 * a10 > 31 - (unsigned __int64)UserDataCount )
    return 3221225485LL;
  v46 = v62;
  v47 = 0;
  v48 = v65;
  while ( v47 < a10 )
  {
    v49 = *(_QWORD *)(v46 + 8LL * v47);
    if ( !v49 )
      goto LABEL_163;
    v50 = -1LL;
    do
      ++v50;
    while ( *(_WORD *)(v49 + 2 * v50) );
    if ( (unsigned int)v50 > 0x40 )
      return 3221225485LL;
    LODWORD(v27) = v50;
    if ( (_DWORD)v50 )
    {
      v51 = 2 * v50 + 2;
    }
    else
    {
LABEL_163:
      v51 = 10;
      if ( !v49 || !(_DWORD)v27 )
      {
        v52 = L"NULL";
        goto LABEL_167;
      }
    }
    v52 = *(const wchar_t **)(v46 + 8LL * v47);
LABEL_167:
    v53 = UserDataCount;
    v54 = UserDataCount + 1;
    v53 *= 2LL;
    *(&UserData.Ptr + v53) = (unsigned __int64)v52;
    *(&UserData.Size + 2 * v53) = v51;
    *(&UserData.Reserved + 2 * v53) = 0;
    if ( !v49 || (v55 = &v48[v47], !(_DWORD)v27) )
      v55 = &v67;
    v56 = v54;
    UserDataCount = v54 + 1;
    v56 *= 2LL;
    ++v47;
    *(&UserData.Ptr + v56) = (unsigned __int64)v55;
    *((_QWORD *)&UserData.Size + v56) = 8LL;
  }
  v57 = EtwWriteEx(StorPortEventProvider_Context, &EventDescriptor, 0LL, 1u, &ActivityId, 0LL, UserDataCount, &UserData);
  if ( (unsigned int)(a3 - 1) <= 1 )
    StorpTelemetryMiniportEventWStr(v60, v66, a1, a2, v63, a10, v46, v65);
  return v57;
}
