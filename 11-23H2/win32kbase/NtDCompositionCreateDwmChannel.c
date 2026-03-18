/*
 * XREFs of NtDCompositionCreateDwmChannel @ 0x1C00B9F60
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001B580 (UserIsCurrentProcessDwm.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C00215A0 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00BA000 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 */

__int64 __fastcall NtDCompositionCreateDwmChannel(unsigned int *a1, __int64 a2, __int64 a3)
{
  signed int v4; // ebx
  unsigned int v5; // esi
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  v4 = a1 == 0LL ? 0xC000000D : 0;
  if ( a1 && !UserIsCurrentProcessDwm((__int64)a1, a2, a3) )
    v4 = -1073741790;
  if ( v4 >= 0 )
  {
    v4 = DirectComposition::CDwmChannel::Create(&v7);
    v5 = v7;
    if ( v4 >= 0 )
    {
      if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a1 = v5;
    }
  }
  return (unsigned int)v4;
}
