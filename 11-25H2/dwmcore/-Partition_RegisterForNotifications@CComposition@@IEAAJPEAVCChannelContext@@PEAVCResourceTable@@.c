/*
 * XREFs of ?Partition_RegisterForNotifications@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x18023745C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18002FD74 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180185B8C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1801992E4 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_RegisterForNotifications(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS *a4)
{
  char *v4; // r8
  struct CChannelContext **v6; // r10
  unsigned int v7; // ecx
  __int64 v8; // rax
  struct CChannelContext **v9; // r9
  unsigned int v10; // ecx
  int v11; // ebx
  unsigned int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v16; // [rsp+30h] [rbp-28h] BYREF
  __int128 v17; // [rsp+34h] [rbp-24h]
  __int64 v18; // [rsp+44h] [rbp-14h]
  CDrawListCache *v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = a2;
  v4 = (char *)this + 936;
  v6 = (struct CChannelContext **)*((_QWORD *)this + 117);
  v7 = 0;
  v8 = *((unsigned int *)v4 + 6);
  if ( *((_BYTE *)a4 + 4) )
  {
    if ( (_DWORD)v8 )
    {
      v9 = v6;
      do
      {
        if ( a2 == *v9 )
          break;
        ++v7;
        ++v9;
      }
      while ( v7 < (unsigned int)v8 );
    }
    if ( v7 == *((_DWORD *)this + 240) )
    {
      v10 = v8 + 1;
      if ( (int)v8 + 1 < (unsigned int)v8 )
      {
        v11 = -2147024362;
        v12 = 181;
        v13 = -2147024362;
LABEL_14:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v12, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x408u, 0LL);
        return 0LL;
      }
      if ( v10 > *((_DWORD *)v4 + 5) )
      {
        v11 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v4, 8u, (__int64)v4, &v19);
        v13 = v11;
        if ( v11 < 0 )
        {
          v12 = 192;
          goto LABEL_14;
        }
      }
      else
      {
        v6[v8] = a2;
        *((_DWORD *)v4 + 6) = v10;
      }
      CMILRefCountImpl::AddReference((CDrawListCache *)((char *)v19 + 8));
      v16 = 5;
      v18 = 0LL;
      v14 = *((_DWORD *)this + 218);
      v17 = 0LL;
      DWORD1(v17) = v14;
      DWORD2(v17) = v14;
      CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v16);
    }
  }
  else
  {
    if ( (_DWORD)v8 )
    {
      do
      {
        if ( a2 == *v6 )
          break;
        ++v7;
        ++v6;
      }
      while ( v7 < (unsigned int)v8 );
    }
    if ( v7 < *((_DWORD *)this + 240) && (unsigned int)DynArray<CChannelContext *,1>::Remove((__int64 *)v4, &v19) )
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v19);
  }
  return 0LL;
}
