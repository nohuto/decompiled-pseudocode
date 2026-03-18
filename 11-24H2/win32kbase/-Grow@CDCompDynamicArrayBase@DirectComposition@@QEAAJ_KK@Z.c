/*
 * XREFs of ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140075FFC
 * Callers:
 *     ?CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x14007611C (-CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140102560 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140120700 (-SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCAppli.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140125FB0 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x140131F98 (-AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x140145CB8 (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140080F58 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CDCompDynamicArrayBase::Grow(
        DirectComposition::CDCompDynamicArrayBase *this,
        __int64 a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebx
  char *v10; // rax
  char *v11; // rbp
  unsigned __int64 v12; // kr00_8
  unsigned __int64 v13; // rax
  __int64 v14; // r8

  v3 = *((_QWORD *)this + 3);
  v6 = v3 + a2;
  if ( v3 + a2 < v3 )
    return (unsigned int)-1073741801;
  v7 = *((_QWORD *)this + 2);
  v8 = 0;
  if ( v6 > v7 )
  {
    if ( !v7 )
      v7 = 64LL;
    while ( v7 < v6 )
    {
      if ( v7 >= 0x400 )
      {
        while ( v7 < v6 )
        {
          if ( v7 + 1024 < v7 )
            return (unsigned int)-1073741801;
          v7 += 1024LL;
        }
        break;
      }
      v12 = v7;
      v7 *= 2LL;
      if ( !is_mul_ok(v12, 2uLL) )
        return (unsigned int)-1073741801;
    }
    if ( is_mul_ok(v7, *((_QWORD *)this + 4)) )
    {
      v13 = v7 * *((_QWORD *)this + 4);
      v10 = (char *)(*((_BYTE *)this + 8)
                   ? Win32AllocPoolWithQuotaImpl(v6, v13, a3)
                   : Win32AllocPoolImpl(0x100uLL, v13, a3));
      v11 = v10;
      if ( v10 )
      {
        v14 = *((_QWORD *)this + 3);
        if ( v14 )
          memmove(v10, *(const void **)this, *((_QWORD *)this + 4) * v14);
        memset(
          &v11[*((_QWORD *)this + 3) * *((_QWORD *)this + 4)],
          0,
          *((_QWORD *)this + 4) * (v7 - *((_QWORD *)this + 3)));
        if ( *(_QWORD *)this )
          GreDeleteFastMutex(*(char **)this);
        *(_QWORD *)this = v11;
        *((_QWORD *)this + 2) = v7;
        goto LABEL_3;
      }
    }
    return (unsigned int)-1073741801;
  }
LABEL_3:
  *((_QWORD *)this + 3) += a2;
  return v8;
}
