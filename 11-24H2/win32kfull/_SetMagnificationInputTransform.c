/*
 * XREFs of _SetMagnificationInputTransform @ 0x1401FCC98
 * Callers:
 *     _CancelMagnificationInputTransform @ 0x1401FCC60 (_CancelMagnificationInputTransform.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x14026E4F4 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     AcquireMagInputLock @ 0x140163598 (AcquireMagInputLock.c)
 *     ReleaseMagInputLock @ 0x1401635E4 (ReleaseMagInputLock.c)
 *     ?ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z @ 0x1402ADEBC (-ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z.c)
 *     ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1402ADF1C (-VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall SetMagnificationInputTransform(struct _MAGN_INPUT_TRANSFORM *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r8d
  struct tagTHREADINFO *v7; // rsi
  __int64 v8; // rdi
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  int v16; // ecx
  bool v17; // zf
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rdx
  __int64 v22; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rdx
  __int64 v32; // rcx
  _OWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // [rsp+20h] [rbp-30h] BYREF
  __int128 v41; // [rsp+30h] [rbp-20h]
  __int128 v42; // [rsp+40h] [rbp-10h]

  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v3 = PtiCurrent((__int64)a1, a2);
  v6 = *((_DWORD *)a1 + 8);
  v7 = v3;
  v8 = *((_QWORD *)v3 + 62);
  if ( !v6 )
  {
    if ( !*(_QWORD *)(v8 + 224) )
    {
      if ( (unsigned int)VerifyMagInputDimensions(a1) )
      {
        v29 = *(_OWORD *)a1;
        *(_QWORD *)&v42 = v7;
        v30 = *((_OWORD *)a1 + 1);
        v40 = v29;
        v41 = v30;
        ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v40);
        AcquireMagInputLock(v32, v31);
        v33 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
        *(_QWORD *)(v8 + 224) = v33;
        if ( v33 )
        {
          v38 = v41;
          *v33 = v40;
          v39 = v42;
          v33[1] = v38;
          v33[2] = v39;
          ReleaseMagInputLock(v35, v34);
          v14 = 804;
          goto LABEL_24;
        }
        UserSetLastError(14);
        ReleaseMagInputLock(v37, v36);
      }
      return 0LL;
    }
LABEL_17:
    v16 = 5;
    goto LABEL_18;
  }
  v9 = v6 - 1;
  if ( !v9 || (v10 = v9 - 1) == 0 )
  {
    v15 = *(_QWORD *)(v8 + 224);
    if ( !v15 )
      goto LABEL_10;
    if ( v7 == *(struct tagTHREADINFO **)(v15 + 32) )
    {
      if ( (unsigned int)VerifyMagInputDimensions(a1) )
      {
        v17 = *((_DWORD *)a1 + 8) == 1;
        v18 = *(_QWORD *)(v8 + 224);
        v19 = *(_OWORD *)(v18 + 32);
        v41 = *(_OWORD *)(v18 + 16);
        v20 = *(_OWORD *)a1;
        v42 = v19;
        v40 = v20;
        if ( v17 )
          v41 = *((_OWORD *)a1 + 1);
        ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v40);
        AcquireMagInputLock(v22, v21);
        v23 = *(_OWORD **)(v8 + 224);
        v24 = v41;
        *v23 = v40;
        v25 = v42;
        v23[1] = v24;
        v23[2] = v25;
        ReleaseMagInputLock(v27, v26);
        return 1LL;
      }
      return 0LL;
    }
    goto LABEL_17;
  }
  if ( v10 != 1 )
  {
LABEL_10:
    v16 = 87;
LABEL_18:
    UserSetLastError(v16);
    return 0LL;
  }
  v11 = *(_QWORD *)(v8 + 224);
  if ( !v11 )
    return 0LL;
  if ( v7 != *(struct tagTHREADINFO **)(v11 + 32)
    && v7 != *(struct tagTHREADINFO **)(W32GetUserSessionState(v5, v4) + 18704) )
  {
    goto LABEL_17;
  }
  AcquireMagInputLock(v5, v4);
  Win32FreePool(*(void **)(v8 + 224));
  *(_QWORD *)(v8 + 224) = 0LL;
  ReleaseMagInputLock(v13, v12);
  v14 = 805;
LABEL_24:
  PostMessage(-1, v14, 0, 0);
  return 1LL;
}
