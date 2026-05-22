/*
 * XREFs of ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x180060434
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x180060240 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z @ 0x180069BF8 (-ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180086EF0 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall LampArrayDevice::UpdateFromActiveViewClient(LampArrayDevice *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  unsigned int v4; // r15d
  char v6; // si
  __int64 *v7; // rdx
  __int64 *i; // rax
  __int64 j; // rbx
  __int64 *v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  LONGLONG v13; // rax
  LONGLONG v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v21; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  v4 = -1;
  *a2 = -1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v7 = (__int64 *)((char *)this + 32);
  for ( i = (__int64 *)*((_QWORD *)this + 4); i != v7; i = (__int64 *)*i )
  {
    if ( *(_DWORD *)(i[4] + 4184) )
    {
      for ( j = *v7; (__int64 *)j != v7; j = *(_QWORD *)j )
      {
        if ( *(_DWORD *)(j + 24) == *(_DWORD *)(i[4] + 4184) )
        {
          v6 = 1;
          if ( j )
            goto LABEL_24;
          goto LABEL_10;
        }
      }
      break;
    }
  }
LABEL_10:
  v10 = (__int64 *)*v7;
  j = 0LL;
  while ( v10 != v7 )
  {
    if ( *(_DWORD *)(v10[4] + 4100) )
    {
      v11 = *((_DWORD *)v10 + 6);
      if ( v11 == *((_DWORD *)this + 54) )
      {
        j = (__int64)v10;
        break;
      }
      if ( v11 == *((_DWORD *)this + 55) )
        j = (__int64)v10;
    }
    v10 = (__int64 *)*v10;
  }
  if ( *((_BYTE *)this + 224) )
  {
    if ( j )
      goto LABEL_24;
    goto LABEL_23;
  }
  v12 = *((_QWORD *)this + 12);
  if ( v12 && *(_DWORD *)(*(_QWORD *)(v12 + 32) + 4100LL) )
LABEL_23:
    j = *((_QWORD *)this + 12);
LABEL_24:
  if ( this != (LampArrayDevice *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( j && j == *((_QWORD *)this + 12) && *(_DWORD *)(*(_QWORD *)(j + 32) + 4188LL) )
    j &= -(__int64)(v6 != 0);
  LampArrayDevice::ProcessVendorMessages(this, (struct LampArrayDevice::ViewClientListEntry *)j);
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v13 = PerformanceCount.QuadPart - *((_QWORD *)this + 25);
  v14 = *((_QWORD *)this + 26);
  if ( v13 < v14 )
  {
    v18 = 1000 * (v14 - v13) / *((_QWORD *)this + 24);
    if ( v18 > 0xFFFFFFFFLL )
      LODWORD(v18) = -1;
    v4 = v18;
  }
  else
  {
    v21 = 0;
    v15 = LampArrayDevice::ProcessLampState(this, (struct LampArrayDevice::ViewClientListEntry *)j, &v21);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x153,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v15,
        v19);
      if ( v2 )
        LeaveCriticalSection(v2);
      return v16;
    }
    if ( v21 )
      QueryPerformanceCounter((LARGE_INTEGER *)this + 25);
  }
  *a2 = v4;
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
