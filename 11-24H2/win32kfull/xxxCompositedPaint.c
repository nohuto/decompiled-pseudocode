/*
 * XREFs of xxxCompositedPaint @ 0x140032604
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1400322FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x140034330 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x140032964 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxInternalInvalidate @ 0x1400428C0 (xxxInternalInvalidate.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     UpdateSprite @ 0x1400CB4D8 (UpdateSprite.c)
 */

void __fastcall xxxCompositedPaint(struct tagWND *a1)
{
  int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  const struct tagRECT *Prop; // rax
  const struct tagRECT *v7; // rbx
  int *p_left; // r15
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 DCEx; // rax
  int v18; // ebx
  HDC v19; // rsi
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  _DWORD *v30; // r8
  __int64 v31; // rdi
  __int64 v32; // rcx
  HDC v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 EmptyRgnPublic; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  _BYTE v44[56]; // [rsp+60h] [rbp-38h] BYREF
  struct tagSIZE v45; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v46; // [rsp+B0h] [rbp+18h] BYREF

  SetOrClrWF(1LL, a1, 2832LL, 1LL);
  v2 = xxxCompositedTraverse(a1);
  SetOrClrWF(0LL, a1, 2832LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v44);
  UserSessionState = W32GetUserSessionState(v4, v3);
  Prop = (const struct tagRECT *)GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41422), 1LL);
  v7 = Prop;
  if ( Prop )
  {
    p_left = &Prop[1].left;
    v9 = IsRectEmptyInl(Prop + 1);
    v12 = v9;
    if ( !v2 && !v9 )
    {
      EmptyRgnPublic = *(_QWORD *)&v7[2].right;
      if ( EmptyRgnPublic
        || (EmptyRgnPublic = CreateEmptyRgnPublic(), (*(_QWORD *)&v7[2].right = EmptyRgnPublic) != 0LL) )
      {
        if ( EmptyRgnPublic != 1 )
        {
          v40 = W32GetUserSessionState(v11, v10);
          SetRectRgnIndirect(*(_QWORD *)(v40 + 63416), p_left);
          v43 = W32GetUserSessionState(v42, v41);
          GreCombineRgn(*(_QWORD *)&v7[2].right, *(_QWORD *)&v7[2].right, *(_QWORD *)(v43 + 63416), 2LL);
        }
      }
      else
      {
        *(_QWORD *)&v7[2].right = 1LL;
      }
      v12 = 1;
      *(_OWORD *)p_left = 0LL;
    }
    v13 = *(_QWORD *)&v7[2].right;
    if ( v13 )
    {
      xxxInternalInvalidate(a1);
      DeleteMaybeSpecialRgn(*(_QWORD *)&v7[2].right);
      *(_QWORD *)&v7[2].right = 0LL;
    }
    if ( !v12 )
    {
      v14 = *(_QWORD *)&v7->left;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v46 = 0LL;
        v28 = W32GetUserSessionState(v11, v13);
        v29 = GreSelectBitmap(*(_QWORD *)(v28 + 43288), v14);
        v30 = (_DWORD *)*((_QWORD *)a1 + 5);
        v31 = v29;
        v45.cx = v30[24] - v30[22];
        v45.cy = v30[25] - v30[23];
        v33 = *(HDC *)(W32GetUserSessionState(v32, (unsigned int)v45.cy) + 43288);
        v36 = W32GetUserSessionState(v35, v34);
        UpdateSprite(
          *(HDEV *)(*(_QWORD *)(v36 + 57008) + 48LL),
          a1,
          0LL,
          &v45,
          v33,
          (__int64)&v46,
          0,
          0LL,
          0x40000000u,
          (__int64)p_left);
        v26 = W32GetUserSessionState(v38, v37);
        v27 = v31;
      }
      else
      {
        v15 = W32GetUserSessionState(v11, v13);
        v16 = GreSelectBitmap(*(_QWORD *)(v15 + 43288), v14);
        SetOrClrWF(0LL, a1, 2848LL, 1LL);
        DCEx = _GetDCEx(a1, 0LL, 1073807363LL);
        v18 = p_left[1];
        v19 = (HDC)DCEx;
        v20 = *p_left;
        v23 = W32GetUserSessionState(v22, v21);
        GreBitBltInternal(
          v19,
          *p_left,
          p_left[1],
          p_left[2] - *p_left,
          p_left[3] - p_left[1],
          *(HDC *)(v23 + 43288),
          v20,
          v18,
          0xCC0020u,
          0,
          0);
        _ReleaseDC(v19);
        SetOrClrWF(1LL, a1, 2848LL, 1LL);
        v26 = W32GetUserSessionState(v25, v24);
        v27 = v16;
      }
      GreSelectBitmap(*(_QWORD *)(v26 + 43288), v27);
      *(_OWORD *)p_left = 0LL;
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v44);
}
