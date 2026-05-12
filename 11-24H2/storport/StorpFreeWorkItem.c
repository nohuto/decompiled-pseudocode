/*
 * XREFs of StorpFreeWorkItem @ 0x140053CE0
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400255D0 (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpFreeWorkItem(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  PDEVICE_OBJECT v5; // rcx
  __int64 v6; // rdx
  signed __int32 v7; // r10d
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rax
  int *v11; // [rsp+40h] [rbp+8h] BYREF
  int *v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 67LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids, a1, a2);
    }
    return (unsigned int)-1056964602;
  }
  if ( !*(_QWORD *)a2 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964607;
    }
    v6 = 68LL;
LABEL_33:
    WPP_SF_(v5->AttachedDevice, v6, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
    return (unsigned int)-1056964607;
  }
  if ( *(_QWORD *)(a2 + 8) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 69LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
    }
    return (unsigned int)-1056964596;
  }
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 70LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
    }
    return (unsigned int)-1056964600;
  }
  RaidpPortGetAdapter(a1, &v11, &v12);
  if ( !v11 && !v12 )
    return 3238002694LL;
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 24), v7, 1);
  if ( !v9 )
  {
    IoFreeWorkItem(*(PIO_WORKITEM *)a2);
    *(_QWORD *)a2 = 0LL;
    ExFreePoolWithTag((PVOID)a2, 0x49576152u);
    if ( v11 )
      v10 = v11 + 1222;
    else
      v10 = v12 + 270;
    _InterlockedDecrement(v10);
    return v2;
  }
  if ( v9 == v7 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < (unsigned __int8)v7 )
    {
      return (unsigned int)-1056964607;
    }
    v6 = 71LL;
    goto LABEL_33;
  }
  return v2;
}
