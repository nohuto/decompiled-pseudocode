/*
 * XREFs of ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A5C74
 * Callers:
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801A48A0 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801A56D0 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18003DBB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  __int64 v3; // rax
  int v4; // ebx
  int v9; // eax
  unsigned int ChannelCallbackId; // eax
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  __int64 v13; // r10
  int v14; // eax
  _QWORD v15[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-18h]

  v3 = *((_QWORD *)this + 7);
  v4 = 0;
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 108) )
    {
      if ( *((_DWORD *)this + 18) )
      {
        v9 = *((_DWORD *)this + 19);
        if ( _bittest(&v9, a2) )
        {
          if ( (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6416LL) + 72LL))(
                 *(_QWORD *)(*((_QWORD *)this + 3) + 6416LL),
                 11LL) )
          {
            ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
            v11 = *(_OWORD *)&a3->m11;
            v12 = *(_QWORD *)&a3->m[2][0];
            v15[0] = ChannelCallbackId;
            v15[1] = *((unsigned int *)this + 18);
            v16 = v11;
            v17 = v12;
            v14 = CoreUICallSend(v13, v15, 2LL, 11LL, 7, &unk_180336ED0, a2, &v16, ChannelCallbackId);
            if ( v14 != -2018375675 )
              v4 = v14;
            if ( v4 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x212u, 0LL);
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
