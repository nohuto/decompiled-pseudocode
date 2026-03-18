/*
 * XREFs of ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x1400678B8
 * Callers:
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14003C7B8 (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     xxxWindowFromPoint @ 0x140040384 (xxxWindowFromPoint.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1401EF67C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14003C7B8 (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140066FA0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x140068100 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     PtInRect @ 0x14006E460 (PtInRect.c)
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14019CE40 (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     SizeBoxHwnd @ 0x140220CB8 (SizeBoxHwnd.c)
 */

__int64 __fastcall xxxWindowHitTest2(__int64 a1, struct tagPOINT a2, int *a3, unsigned int a4)
{
  signed __int32 *v7; // rdi
  const signed __int32 *v8; // r14
  struct tagTHREADINFO **v9; // rsi
  __int64 v10; // rdx
  __int64 *v11; // rbp
  __int64 *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  const signed __int32 *v15; // r8
  struct tagTHREADINFO *v16; // rax
  int v17; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  struct tagTHREADINFO *v22; // rax
  __int64 v23; // rdx
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-38h] BYREF
  tagPOINT v27; // [rsp+98h] [rbp+10h] BYREF

  v27 = a2;
  v7 = (signed __int32 *)a1;
  if ( !a1 )
    return 0LL;
  v8 = (const signed __int32 *)(a1 + 380);
  v9 = (struct tagTHREADINFO **)(a1 + 40);
  if ( (*(_DWORD *)(a1 + 380) & 0x40000000) == 0
    && ((*((_BYTE *)*v9 + 31) & 0x10) == 0 || !(unsigned int)PtInRect((char *)*v9 + 88)) )
  {
    return 0LL;
  }
  if ( tagWND::PtOutsideClipRgnOrMaxClip((tagWND *)v7, &v27) )
    return 0LL;
  v11 = (__int64 *)v9;
  if ( (*((_BYTE *)*v9 + 26) & 8) != 0 )
  {
    if ( !LayerHitTest((struct tagWND *)v7, a2) )
      return 0LL;
    v8 = v7 + 95;
    v11 = (__int64 *)(v7 + 10);
  }
  v12 = (__int64 *)v9;
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v7, v10) )
  {
    v12 = v11;
    if ( (a4 & 1) != 0 )
    {
      v16 = *v9;
      if ( (*((_BYTE *)*v9 + 31) & 0xC0) != 0x40 )
      {
        v17 = -2;
        goto LABEL_18;
      }
      return 0LL;
    }
  }
  v15 = v8;
  if ( !_bittest(v8, 0x1Eu) )
  {
    v14 = *v12;
    if ( (*(_BYTE *)(*v12 + 31) & 0x20) == 0 )
    {
      if ( (unsigned int)PtInRect(v14 + 104) )
      {
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, *((_QWORD *)v7 + 14));
        v21 = xxxWindowHitTest(*((_QWORD *)v7 + 14), *(_QWORD *)&a2, (__int64)a3, a4);
        if ( v21 )
        {
          v24 = PtiCurrent(v20, v19);
          Win32HM_UnlockFromThread<1>((ULONG_PTR)v24, BugCheckParameter3);
          return v21;
        }
        v22 = PtiCurrent(v20, v19);
        Win32HM_UnlockFromThread<1>((ULONG_PTR)v22, BugCheckParameter3);
        v15 = v7 + 95;
      }
    }
  }
  LODWORD(v16) = *v15;
  if ( (*v15 & 0x40000000) != 0 || (v16 = PtiCurrent(v14, v13), *((struct tagTHREADINFO **)v7 + 2) != v16) )
  {
    v17 = 1;
  }
  else
  {
    LODWORD(v16) = xxxSendTransformableMessageTimeout(
                     (struct tagTHREADINFO **)v7,
                     132LL,
                     0LL,
                     (struct tagDRAWITEMSTRUCT *)(LOWORD(a2.x) | (LOWORD(v27.y) << 16)),
                     0,
                     0,
                     0LL,
                     1,
                     0);
    v17 = (int)v16;
    if ( (_DWORD)v16 == -1 )
      return 0LL;
  }
LABEL_18:
  if ( a3 )
    *a3 = v17;
  v23 = *((_QWORD *)v7 + 5);
  LOBYTE(v16) = ~*(_BYTE *)(v23 + 26);
  if ( v17 == (((unsigned int)v16 >> 6) & 1 | 0x10) && (*(_BYTE *)(v23 + 30) & 4) == 0 )
  {
    v25 = SizeBoxHwnd(v7);
    if ( v25 )
      v7 = (signed __int32 *)v25;
  }
  return *(_QWORD *)v7;
}
