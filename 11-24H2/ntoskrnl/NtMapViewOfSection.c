/*
 * XREFs of NtMapViewOfSection @ 0x140899970
 * Callers:
 *     DifNtMapViewOfSectionWrapper @ 0x140635780 (DifNtMapViewOfSectionWrapper.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     EtwProviderEnabled @ 0x1403D47F0 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x1403D4B94 (EtwpTiFillProcessIdentity.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     RtlFindMostSignificantBit @ 0x1404489A0 (RtlFindMostSignificantBit.c)
 *     EtwpTiFillThreadIdentity @ 0x140467AC0 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     DbgkMapViewOfSection @ 0x140897F08 (DbgkMapViewOfSection.c)
 *     MiMapViewOfSectionCommon @ 0x140899F20 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x14089A1A0 (MiMapViewOfSection.c)
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
  __int64 v20; // r9
  bool v21; // zf
  _KPROCESS *v22; // rdi
  _KPROCESS *Process; // rsi
  __int64 v24; // rcx
  __int64 v25; // rax
  const EVENT_DESCRIPTOR *v26; // r15
  int v27; // eax
  int v28; // eax
  int v29; // r9d
  int v30; // eax
  int v31; // r9d
  unsigned int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-288h]
  char PreviousMode; // [rsp+50h] [rbp-258h]
  __int128 v40; // [rsp+58h] [rbp-250h] BYREF
  __int128 v41; // [rsp+68h] [rbp-240h] BYREF
  PVOID Object[2]; // [rsp+78h] [rbp-230h]
  int v43; // [rsp+88h] [rbp-220h] BYREF
  _DWORD v44[4]; // [rsp+90h] [rbp-218h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-208h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-200h] BYREF
  __int128 v47; // [rsp+B0h] [rbp-1F8h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-1E8h]
  __int128 v49; // [rsp+D0h] [rbp-1D8h]
  __int128 v50; // [rsp+E0h] [rbp-1C8h]
  __int128 v51; // [rsp+F0h] [rbp-1B8h]
  __int128 v52; // [rsp+100h] [rbp-1A8h]
  __int128 v53; // [rsp+110h] [rbp-198h]
  __int128 v54; // [rsp+120h] [rbp-188h]
  unsigned __int64 v55; // [rsp+130h] [rbp-178h] BYREF
  unsigned __int64 v56; // [rsp+138h] [rbp-170h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57[18]; // [rsp+140h] [rbp-168h] BYREF

  v10 = a4;
  v40 = 0LL;
  v41 = 0LL;
  *(_OWORD *)Object = 0LL;
  if ( a4 )
  {
    v10 = a4 < 0x20 ? a4 + 32 : 63 - RtlFindMostSignificantBit(a4);
    if ( v10 > 0x35 )
      return 3221225485LL;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = MiMapViewOfSectionCommon(a2, a1, 0LL, a3, a7, a6, a10, v10, PreviousMode, &v40);
  if ( (int)result >= 0 )
  {
    v15 = MiSectionControlArea((__int64)Object[0]);
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    *(_QWORD *)&v53 = KeGetCurrentThread()->ApcState.Process;
    *((PVOID *)&v52 + 1) = Object[1];
    BYTE9(v50) = KeGetCurrentThread()->PreviousMode;
    DWORD1(v50) = a9 & 0x7F;
    if ( DWORD1(v50) > (unsigned __int16)KeNumberNodes )
    {
      v19 = -1073741811;
      v21 = (_QWORD)v40 == 0LL;
    }
    else
    {
      DWORD2(v49) = a9 & 0xFFFFFF80;
      HIDWORD(v49) = a10;
      LODWORD(v51) = 0;
      v16 = BYTE12(v50);
      if ( (_QWORD)v40 )
      {
        v16 = BYTE12(v50) | 1;
        HIDWORD(v50) |= 1u;
      }
      *((_QWORD *)&v48 + 1) = *((_QWORD *)&v40 + 1);
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
          v37 = 0xFFFFFFFFFFFFFFFFuLL >> v10;
          if ( 0xFFFFFFFFFFFFFFFFuLL >> v10 > 0x7FFFFFFEFFFFLL )
            v37 = 0x7FFFFFFEFFFFLL;
          v17 = v37;
        }
        v18 = *((_QWORD *)Object[1] + 109) - 1LL;
        if ( v17 <= v18 )
          v18 = v17;
      }
      *((_QWORD *)&v47 + 1) = v18;
      *(_QWORD *)&v48 = 0x10000LL;
      if ( (*(_DWORD *)(v15 + 56) & 0x420) == 0 )
      {
        if ( (a9 & 0x20000000) != 0 )
        {
          *(_QWORD *)&v48 = 0x200000LL;
        }
        else if ( (a9 & 0x40000000) != 0 )
        {
          *(_QWORD *)&v48 = 4096LL;
        }
      }
      v19 = MiMapViewOfSection(Object[0], (unsigned int)&v47, (unsigned int)&v40, a5, (__int64)&v41, a8, 0);
      v44[2] = v19;
      if ( v19 >= 0 )
      {
        if ( (BYTE12(v50) & 4) != 0 )
          DbgkMapViewOfSection((_KPROCESS *)Object[1], (__int64)Object[0], v40, v20, (__int64)UserData, 0, 0);
        if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v41) & 2) != 0 )
        {
          v44[0] = a10;
          v43 = a9;
          v46 = *((_QWORD *)&v48 + 1);
          v45 = v40;
          v22 = (_KPROCESS *)Object[1];
          if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xF00uLL) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v24 = 0LL;
            if ( Process == v22 )
              v24 = 1LL;
            v25 = 2LL;
            if ( PreviousMode )
              v25 = 0LL;
            v26 = (const EVENT_DESCRIPTOR *)off_1400016C0[v25 + v24];
            if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v26) )
            {
              v27 = EtwpTiFillProcessIdentity(v57, (__int64)Process, &v55);
              v28 = EtwpTiFillThreadIdentity((__int64)&v57[v27], (__int64)KeGetCurrentThread());
              v30 = EtwpTiFillProcessIdentity(&v57[v28 + v29].Ptr, (__int64)v22, &v56);
              v32 = v30 + v31;
              v33 = v32;
              v57[v33].Ptr = (ULONGLONG)&v45;
              *(_QWORD *)&v57[v33].Size = 8LL;
              v34 = ++v32;
              v57[v34].Ptr = (ULONGLONG)&v46;
              *(_QWORD *)&v57[v34].Size = 8LL;
              v35 = ++v32;
              v57[v35].Ptr = (ULONGLONG)&v43;
              *(_QWORD *)&v57[v35].Size = 4LL;
              v36 = ++v32;
              v57[v36].Ptr = (ULONGLONG)v44;
              *(_QWORD *)&v57[v36].Size = 4LL;
              EtwWrite(EtwThreatIntProvRegHandle, v26, 0LL, v32 + 1, v57);
            }
          }
        }
        *a7 = *((_QWORD *)&v48 + 1);
        *a3 = v40;
        if ( a6 )
          *a6 = v41;
        goto LABEL_20;
      }
      v21 = (_QWORD)v40 == 0LL;
    }
    if ( v21 )
      ++dword_140E301A8;
    else
      ++dword_140E301AC;
LABEL_20:
    ObfDereferenceObjectWithTag(Object[0], 0x77566D4Du);
    ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
    return (unsigned int)v19;
  }
  ++dword_140E301A8;
  return result;
}
