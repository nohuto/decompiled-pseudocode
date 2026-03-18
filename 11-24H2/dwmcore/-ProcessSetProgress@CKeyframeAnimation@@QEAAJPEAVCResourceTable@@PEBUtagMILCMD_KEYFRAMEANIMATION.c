/*
 * XREFs of ?ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPROGRESS@@@Z @ 0x1801DBD20
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetProgress(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETPROGRESS *a3)
{
  float v3; // xmm1_4
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rsi
  struct _RTL_GENERIC_TABLE *v8; // rcx
  __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int Buffer; // [rsp+20h] [rbp-38h] BYREF
  __int128 v17; // [rsp+28h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-20h]
  int v19; // [rsp+40h] [rbp-18h]

  v3 = *((float *)a3 + 2);
  if ( *((float *)this + 121) != v3 )
  {
    v5 = *((_QWORD *)this + 3);
    v6 = 0;
    *((_BYTE *)this + 536) |= 4u;
    *((float *)this + 121) = fminf(1.0, fmaxf(v3, 0.0));
    v7 = *(_QWORD *)(v5 + 888);
    if ( v7 == *(_QWORD *)(v5 + 896) )
    {
      v15 = v7 + 1;
      v7 = 1LL;
      if ( v15 )
        v7 = v15;
    }
    v8 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
    v9 = 0LL;
    if ( v8 )
    {
      v18 = 0LL;
      v19 = 0;
      v17 = 0LL;
      Buffer = 32;
      v9 = (__int64)RtlLookupElementGenericTable(v8, &Buffer);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v17);
    }
    v10 = v9 + 8;
    v11 = -v9;
    v12 = v10 & -(__int64)(v11 != 0);
    if ( v12 )
    {
      if ( *(_DWORD *)((v10 & -(__int64)(v11 != 0)) + 0x18) )
      {
        do
        {
          v14 = v6++;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 8 * v14) + 232LL) = v7;
        }
        while ( v6 < *(_DWORD *)(v12 + 24) );
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
      CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 8u);
    }
  }
  return 0LL;
}
