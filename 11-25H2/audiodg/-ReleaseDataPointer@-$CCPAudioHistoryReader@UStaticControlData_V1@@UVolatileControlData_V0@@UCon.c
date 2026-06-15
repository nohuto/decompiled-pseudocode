/*
 * XREFs of ?ReleaseDataPointer@?$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXXZ @ 0x140081D10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 */

void __fastcall CCPAudioHistoryReader<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::ReleaseDataPointer(
        __int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // ecx
  int v4; // eax
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v3 = *(_DWORD *)(a1 + 80);
  v5 = v1;
  if ( v3 == *(_DWORD *)(a1 + 84) )
  {
    v4 = -1;
  }
  else if ( v3 == *(_DWORD *)(a1 + 100) - 1 )
  {
    v4 = 0;
  }
  else
  {
    v4 = v3 + 1;
  }
  *(_DWORD *)(a1 + 80) = v4;
  CSAutoLock<1>::~CSAutoLock<1>(&v5);
}
