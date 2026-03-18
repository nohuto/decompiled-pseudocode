/*
 * XREFs of ?GetAvailableDevice@CDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040814
 * Callers:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDeviceManager::GetAvailableDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  __int64 *i; // r10
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  *a3 = 0LL;
  for ( i = *(__int64 **)(a1 + 56); i != *(__int64 **)(a1 + 64); i += 2 )
  {
    if ( a2 == *(_QWORD *)(*i + 936) )
    {
      v5 = *i;
      if ( *(_DWORD *)(*i + 1112) )
      {
        return 2;
      }
      else
      {
        *a3 = v5;
        if ( _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u) <= 0 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v7);
        return 1;
      }
    }
  }
  return v3;
}
