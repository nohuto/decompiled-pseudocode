/*
 * XREFs of ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x140111210
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1400B911C (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAVCAnimationBinding@2@@Z @ 0x140111444 (-CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCB.c)
 *     ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x1401115C4 (-Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@P.c)
 *     ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x140111640 (-Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimati.c)
 *     ?Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel@2@@Z @ 0x140111694 (-Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel.c)
 *     ?DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x140156F34 (-DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x14019E534 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::BindAnimation(
        struct DirectComposition::CAnimationBinding **this,
        struct DirectComposition::CResourceMarshaler *a2,
        unsigned int a3,
        struct DirectComposition::CBaseAnimation *a4)
{
  __int64 v4; // rax
  struct DirectComposition::CBaseAnimation **v5; // rdi
  struct DirectComposition::CBaseAnimation **v6; // rbx
  __int64 v8; // r14
  struct DirectComposition::CAnimationBinding *v12; // rax
  int v13; // r15d
  struct DirectComposition::CAnimationBinding *v14; // rcx
  struct DirectComposition::CAnimationBinding *v15; // rcx
  int v17; // ecx
  bool v18; // zf
  __int64 (__fastcall ***v19)(_QWORD); // rcx
  DirectComposition::CResourceMarshaler *v20; // rax
  struct DirectComposition::CAnimationBinding *v21; // [rsp+30h] [rbp-38h] BYREF

  v4 = *((_QWORD *)a2 + 5);
  v5 = 0LL;
  v6 = 0LL;
  v8 = 0LL;
  while ( v4 )
  {
    if ( *(_DWORD *)(v4 + 12) != a3 )
      goto LABEL_20;
    v17 = *(_DWORD *)(v4 + 8);
    if ( (v17 & 1) != 0 )
    {
      v5 = (struct DirectComposition::CBaseAnimation **)v4;
      break;
    }
    if ( (v17 & 2) != 0 )
    {
      v6 = (struct DirectComposition::CBaseAnimation **)v4;
      v18 = v8 == 0;
    }
    else
    {
      if ( (v17 & 4) == 0 )
        goto LABEL_20;
      v8 = v4;
      v18 = v6 == 0LL;
    }
    if ( !v18 )
      break;
LABEL_20:
    v4 = *(_QWORD *)(v4 + 32);
  }
  v12 = (struct DirectComposition::CAnimationBinding *)v5;
  if ( !v5 )
    v12 = (struct DirectComposition::CAnimationBinding *)v6;
  v13 = DirectComposition::CApplicationChannel::CheckAndAddHandoff(
          (DirectComposition::CApplicationChannel *)this,
          a2,
          a3,
          a4,
          v12);
  if ( v13 >= 0 )
  {
    if ( !v6 )
    {
      if ( (!v5 || v5[3] == a4) && (!v8 || *(struct DirectComposition::CBaseAnimation **)(v8 + 24) == a4) )
      {
        if ( !v5 )
        {
          if ( !v8 )
            goto LABEL_11;
LABEL_39:
          if ( *(struct DirectComposition::CBaseAnimation **)(v8 + 24) == a4 )
          {
            DirectComposition::CApplicationChannel::DiscardRemovingBinding(
              (DirectComposition::CApplicationChannel *)this,
              (struct DirectComposition::CAnimationBinding *)v8);
            v19 = *(__int64 (__fastcall ****)(_QWORD))(v8 + 24);
            *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 8) & 0xFFFFFFFA | 1;
            v20 = (DirectComposition::CResourceMarshaler *)(**v19)(v19);
            DirectComposition::CResourceMarshaler::AddRef(v20);
            if ( v6 )
              DirectComposition::CApplicationChannel::DeleteAddingBinding(
                (DirectComposition::CApplicationChannel *)this,
                v6);
            return (unsigned int)v13;
          }
LABEL_17:
          if ( v6 && v6[3] != a4 )
            DirectComposition::CAnimationBinding::Reassign(
              (DirectComposition::CAnimationBinding *)v6,
              a4,
              (struct DirectComposition::CApplicationChannel *)this);
          return (unsigned int)v13;
        }
        goto LABEL_37;
      }
LABEL_11:
      v21 = 0LL;
      v14 = this[47];
      if ( v14 )
      {
        this[47] = 0LL;
        v21 = v14;
        DirectComposition::CAnimationBinding::Initialize(v14, a2, a3, a4);
      }
      else
      {
        v13 = DirectComposition::CAnimationBinding::Create(a2, a3, a4, &v21);
        if ( v13 < 0 )
          return (unsigned int)v13;
      }
      if ( *((int *)this + 6) > 2 )
      {
        *(_QWORD *)v21 = 0LL;
      }
      else
      {
        v15 = v21;
        *(_QWORD *)v21 = this[62];
        this[62] = v15;
      }
    }
    if ( !v5 )
    {
      if ( v8 )
        goto LABEL_39;
      goto LABEL_17;
    }
LABEL_37:
    if ( v5[3] != a4 )
      DirectComposition::CApplicationChannel::NewRemovingBinding(
        (DirectComposition::CApplicationChannel *)this,
        (struct DirectComposition::CAnimationBinding *)v5);
  }
  return (unsigned int)v13;
}
