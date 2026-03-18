/*
 * XREFs of NtMapViewOfSection @ 0x1408FC1C0
 * Callers:
 *     DifNtMapViewOfSectionWrapper @ 0x1406297C0 (DifNtMapViewOfSectionWrapper.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     EtwpTiFillProcessIdentity @ 0x1403BCF74 (EtwpTiFillProcessIdentity.c)
 *     EtwProviderEnabled @ 0x1403BE620 (EtwProviderEnabled.c)
 *     RtlFindMostSignificantBit @ 0x14044A740 (RtlFindMostSignificantBit.c)
 *     EtwpTiFillThreadIdentity @ 0x14046931C (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiMapViewOfSectionCommon @ 0x1408FC770 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x1408FC9F0 (MiMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1408FD08C (DbgkMapViewOfSection.c)
 */

__int64 __fastcall NtMapViewOfSection(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        ULONGLONG a4,
        int a5,
        _QWORD *a6,
        _QWORD *a7,
        int a8,
        int a9,
        int a10)
{
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  unsigned __int64 v15; // r8
  char v16; // cl
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  int v19; // ebx
  bool v20; // zf
  _KPROCESS *v21; // rdi
  _KPROCESS *Process; // rsi
  __int64 v23; // rcx
  __int64 v24; // rax
  const EVENT_DESCRIPTOR *v25; // r15
  int v26; // eax
  int v27; // eax
  int v28; // r9d
  int v29; // eax
  int v30; // r9d
  unsigned int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  char PreviousMode; // [rsp+50h] [rbp-258h]
  __int128 v38; // [rsp+58h] [rbp-250h] BYREF
  __int128 v39; // [rsp+68h] [rbp-240h] BYREF
  PVOID Object[2]; // [rsp+78h] [rbp-230h]
  int v41; // [rsp+88h] [rbp-220h] BYREF
  _DWORD v42[4]; // [rsp+90h] [rbp-218h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-208h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-200h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-1F8h] BYREF
  __int128 v46; // [rsp+C0h] [rbp-1E8h]
  __int128 v47; // [rsp+D0h] [rbp-1D8h]
  __int128 v48; // [rsp+E0h] [rbp-1C8h]
  __int128 v49; // [rsp+F0h] [rbp-1B8h]
  __int128 v50; // [rsp+100h] [rbp-1A8h]
  __int128 v51; // [rsp+110h] [rbp-198h]
  __int128 v52; // [rsp+120h] [rbp-188h]
  unsigned __int64 v53; // [rsp+130h] [rbp-178h] BYREF
  unsigned __int64 v54; // [rsp+138h] [rbp-170h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[18]; // [rsp+140h] [rbp-168h] BYREF

  v10 = a4;
  v38 = 0LL;
  v39 = 0LL;
  *(_OWORD *)Object = 0LL;
  if ( a4 )
  {
    v10 = a4 < 0x20 ? a4 + 32 : 63 - RtlFindMostSignificantBit(a4);
    if ( v10 > 0x35 )
      return 3221225485LL;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = MiMapViewOfSectionCommon(a2, a1, 0LL, a3, a7, a6, a10, v10, PreviousMode, &v38);
  if ( (int)result >= 0 )
  {
    v15 = MiSectionControlArea((__int64)Object[0]);
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    *(_QWORD *)&v51 = KeGetCurrentThread()->ApcState.Process;
    *((PVOID *)&v50 + 1) = Object[1];
    BYTE9(v48) = KeGetCurrentThread()->PreviousMode;
    DWORD1(v48) = a9 & 0x7F;
    if ( DWORD1(v48) > (unsigned __int16)KeNumberNodes )
    {
      v19 = -1073741811;
      v20 = (_QWORD)v38 == 0LL;
    }
    else
    {
      DWORD2(v47) = a9 & 0xFFFFFF80;
      HIDWORD(v47) = a10;
      LODWORD(v49) = 0;
      v16 = BYTE12(v48);
      if ( (_QWORD)v38 )
      {
        v16 = BYTE12(v48) | 1;
        HIDWORD(v48) |= 1u;
      }
      *((_QWORD *)&v46 + 1) = *((_QWORD *)&v38 + 1);
      if ( (*(_DWORD *)(v15 + 56) & 0x20) == 0 && (v16 & 1) != 0 )
      {
        v18 = *((_QWORD *)Object[1] + 109) - 1LL;
        if ( v18 >= 0x7FFFFFFEFFFFLL )
          v18 = 0x7FFFFFFEFFFFLL;
      }
      else
      {
        v17 = 0x7FFFFFFEFFFFLL;
        if ( v10 )
        {
          v36 = 0xFFFFFFFFFFFFFFFFuLL >> v10;
          if ( 0xFFFFFFFFFFFFFFFFuLL >> v10 > 0x7FFFFFFEFFFFLL )
            v36 = 0x7FFFFFFEFFFFLL;
          v17 = v36;
        }
        v18 = *((_QWORD *)Object[1] + 109) - 1LL;
        if ( v17 <= v18 )
          v18 = v17;
      }
      *((_QWORD *)&v45 + 1) = v18;
      *(_QWORD *)&v46 = 0x10000LL;
      if ( (*(_DWORD *)(v15 + 56) & 0x420) == 0 )
      {
        if ( (a9 & 0x20000000) != 0 )
        {
          *(_QWORD *)&v46 = 0x200000LL;
        }
        else if ( (a9 & 0x40000000) != 0 )
        {
          *(_QWORD *)&v46 = 4096LL;
        }
      }
      v19 = MiMapViewOfSection(Object[0], (unsigned int)&v45, (unsigned int)&v38, a5, (__int64)&v39, a8, 0);
      v42[2] = v19;
      if ( v19 >= 0 )
      {
        if ( (BYTE12(v48) & 4) != 0 )
          DbgkMapViewOfSection(Object[1]);
        if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v39) & 2) != 0 )
        {
          v42[0] = a10;
          v41 = a9;
          v44 = *((_QWORD *)&v46 + 1);
          v43 = v38;
          v21 = (_KPROCESS *)Object[1];
          if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xF00uLL) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v23 = 0LL;
            if ( Process == v21 )
              v23 = 1LL;
            v24 = 2LL;
            if ( PreviousMode )
              v24 = 0LL;
            v25 = (const EVENT_DESCRIPTOR *)off_140002548[v24 + v23];
            if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v25) )
            {
              v26 = EtwpTiFillProcessIdentity(UserData, (__int64)Process, &v53);
              v27 = EtwpTiFillThreadIdentity((__int64)&UserData[v26], (__int64)KeGetCurrentThread());
              v29 = EtwpTiFillProcessIdentity(&UserData[v27 + v28].Ptr, (__int64)v21, &v54);
              v31 = v29 + v30;
              v32 = v31;
              UserData[v32].Ptr = (ULONGLONG)&v43;
              *(_QWORD *)&UserData[v32].Size = 8LL;
              v33 = ++v31;
              UserData[v33].Ptr = (ULONGLONG)&v44;
              *(_QWORD *)&UserData[v33].Size = 8LL;
              v34 = ++v31;
              UserData[v34].Ptr = (ULONGLONG)&v41;
              *(_QWORD *)&UserData[v34].Size = 4LL;
              v35 = ++v31;
              UserData[v35].Ptr = (ULONGLONG)v42;
              *(_QWORD *)&UserData[v35].Size = 4LL;
              EtwWrite(EtwThreatIntProvRegHandle, v25, 0LL, v31 + 1, UserData);
            }
          }
        }
        *a7 = *((_QWORD *)&v46 + 1);
        *a3 = v38;
        if ( a6 )
          *a6 = v39;
        goto LABEL_20;
      }
      v20 = (_QWORD)v38 == 0LL;
    }
    if ( v20 )
      ++dword_140E2FF60;
    else
      ++dword_140E2FF64;
LABEL_20:
    ObfDereferenceObjectWithTag(Object[0], 0x77566D4Du);
    ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
    return (unsigned int)v19;
  }
  ++dword_140E2FF60;
  return result;
}
