/*
 * XREFs of ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x180220B98
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x18003BCF8 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1801E5B78 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z @ 0x180220CE4 (-Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimation::ProcessAppend(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_APPEND *a3,
        const void *a4,
        unsigned int a5)
{
  int v5; // eax
  unsigned int v9; // edi
  struct CPayloadedAnimationPrimitiveBuffer *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-18h]
  struct CPayloadedAnimationPrimitiveBuffer *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 != a5 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xFCu, 0LL);
    goto LABEL_16;
  }
  v9 = 0;
  if ( a4 && v5 )
  {
    v10 = (struct CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)this + 16);
    if ( !v10 )
    {
      v16 = 0LL;
      v11 = CPayloadedAnimationPrimitiveBuffer::Create(&v16);
      v9 = v11;
      if ( v11 < 0 )
      {
        v15 = 261;
LABEL_15:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v15, 0LL);
        goto LABEL_16;
      }
      v10 = v16;
      *((_QWORD *)this + 16) = v16;
    }
    v11 = (*(__int64 (__fastcall **)(struct CPayloadedAnimationPrimitiveBuffer *, unsigned __int64, const void *))(*(_QWORD *)v10 + 48LL))(
            v10,
            (unsigned __int64)*((unsigned int *)a3 + 2) >> 5,
            a4);
    v9 = v11;
    if ( v11 < 0 )
    {
      v15 = 265;
    }
    else
    {
      v12 = *((_QWORD *)this + 18);
      if ( v12 && !*(_QWORD *)(v12 + 104) )
        goto LABEL_16;
      v11 = CBaseAnimation::RegisterAnimateResource((CComposition **)this);
      v9 = v11;
      if ( v11 >= 0 )
        goto LABEL_16;
      v15 = 271;
    }
    goto LABEL_15;
  }
LABEL_16:
  v13 = *((_QWORD *)this + 16);
  if ( v13 && !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13) )
    ReleaseInterface<CPolygon>((__int64 *)this + 16);
  return v9;
}
