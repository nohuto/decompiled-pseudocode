/*
 * XREFs of ?VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z @ 0x18007F450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     floorf @ 0x1800A8B40 (floorf.c)
 *     WPP_SF_ @ 0x1800C1670 (WPP_SF_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeControlBase::VolumeStepDown(CVolumeControlBase *this, const struct _GUID *a2, int *a3)
{
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  float v10; // xmm6_4
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  float v13; // [rsp+50h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_39683fa90ec33421f15b53210ac19d77_Traceguids);
  }
  v6 = *(_QWORD *)this;
  v13 = 0.0;
  v7 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(v6 + 120))(this, &v13);
  if ( v7 < 0 )
  {
    v8 = 356LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = (float)(*((_DWORD *)this + 12) - 1);
  v13 = floorf((float)((float)(v10 * v13) + 0.5) - 1.0) / v10;
  if ( v13 <= 0.0 )
    v13 = 0.0;
  v7 = (*(__int64 (__fastcall **)(CVolumeControlBase *, __int64, const struct _GUID *, int *))(*(_QWORD *)this + 104LL))(
         this,
         v11,
         a2,
         a3);
  if ( v7 < 0 )
  {
    v8 = 361LL;
    goto LABEL_7;
  }
  return 0LL;
}
