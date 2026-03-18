/*
 * XREFs of ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x140207080
 * Callers:
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x140207900 (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     ?SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x14007A380 (-SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x140206578 (-CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x140206610 (-CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::Initialize(DXGVAILGUESTOBJECT *this, __int64 a2, const struct _GUID *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int VmBusGuestSubscribers; // eax
  struct _GUID v8; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)&v8.Data1 = 0LL;
  v4 = CreateVmBusChannel(0LL, &v8, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    DXGVAILGUESTOBJECT::SetVmBusChannel(this, *(struct DXGVMBUSCHANNEL **)&v8.Data1);
    VmBusGuestSubscribers = DXGVAILGUESTOBJECT::CreateVmBusGuestSubscribers(this);
    v5 = VmBusGuestSubscribers;
    if ( VmBusGuestSubscribers < 0 )
    {
      WdLogSingleEntry1(3LL, VmBusGuestSubscribers);
      WdLogGlobalForLineNumber = 2003;
      DXGVAILGUESTOBJECT::SetVmBusChannel(this, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, v4);
    WdLogGlobalForLineNumber = 1988;
  }
  return v5;
}
