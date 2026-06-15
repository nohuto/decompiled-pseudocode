/*
 * XREFs of ?HasPlayToStreams@CApplication@@QEAAHXZ @ 0x180003F74
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800032E0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18000C620 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::HasPlayToStreams(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v3; // esi
  _QWORD *v4; // rdx
  __int64 v5; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( !*(_DWORD *)(v5 + 416) && *(_DWORD *)(v5 + 488) )
    {
      v3 = 1;
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
