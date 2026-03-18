/*
 * XREFs of ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1400370A0
 * Callers:
 *     CreateBitmapStrip @ 0x140113600 (CreateBitmapStrip.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140204AAC (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 * Callees:
 *     GreCreateCompatibleBitmapEx @ 0x1400135CC (GreCreateCompatibleBitmapEx.c)
 *     DrawFrameControl @ 0x1400373A4 (DrawFrameControl.c)
 *     FillRect @ 0x140038250 (FillRect.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     BitBltSysBmp @ 0x14007B288 (BitBltSysBmp.c)
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z @ 0x14018B06C (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z.c)
 */

__int64 __fastcall CreateDPIBitmapStrip(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *v5; // rsi
  unsigned int v6; // ebp
  HDC v7; // r15
  int v8; // ebx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int16 *v17; // rsi
  __int16 *v18; // r14
  __int64 v19; // r13
  LONG v20; // edi
  LONG v21; // r12d
  int v22; // r8d
  __int16 v23; // bx
  LONG v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  HBRUSH v28; // r8
  __int64 v29; // rcx
  RECT v30; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v31[16]; // [rsp+40h] [rbp-38h] BYREF

  v2 = a1;
  v30 = 0LL;
  v5 = (__int64 *)(W32GetUserSessionState(a1, a2) + 760LL * (unsigned int)a1 + 43328);
  if ( v2 )
  {
    v6 = 24 * (v2 + 3);
  }
  else
  {
    v4 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19928);
    v6 = *(unsigned __int16 *)(v4 + 6998);
  }
  v7 = *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 57008) + 72LL);
  EnsureOemBitmapInfoForDpiSlot((struct _tagOEMBITMAPSET *)v5, v6);
  v8 = *((_DWORD *)v5 + 3);
  v9 = *((_DWORD *)v5 + 2);
  UserSessionState = W32GetUserSessionState(v11, v10);
  result = (__int64)GreCreateCompatibleBitmapEx(
                      *(HDC *)(*(_QWORD *)(UserSessionState + 57008) + 64LL),
                      v9,
                      v8,
                      0,
                      0LL,
                      0LL);
  v14 = result;
  if ( result )
  {
    GreSetBitmapOwner(result, 0LL);
    GreSelectBitmap(v7, v14);
    if ( *v5 )
      GreDeleteObject(*v5);
    *v5 = v14;
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v31);
    v17 = (__int16 *)(v5 + 2);
    v18 = (__int16 *)&unk_14034EDD2;
    v19 = 93LL;
    do
    {
      if ( v17[2] )
      {
        v20 = *v17;
        v21 = v17[1];
        v22 = (unsigned __int16)*(v18 - 1);
        v23 = *v18;
        v30.right = v20 + v17[2];
        v24 = v21 + v17[3];
        v30.left = v20;
        v30.top = v21;
        v30.bottom = v24;
        if ( v22 == 0xFFFF )
        {
          if ( (v23 & 1) != 0 )
          {
            if ( *(_DWORD *)(W32GetUserSessionState(v16, v15) + 43304)
              || (v26 = *(_DWORD *)(W32GetUserSessionState(v26, v25) + 67060) & 0x80000010, (_DWORD)v26 != -2147483632) )
            {
              v29 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 19928);
              if ( (v23 & 0x100) != 0 )
                v28 = *(HBRUSH *)(v29 + 4720);
              else
                v28 = *(HBRUSH *)(v29 + 4712);
            }
            else
            {
              v27 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 19928);
              if ( (v23 & 0x100) != 0 )
                v28 = *(HBRUSH *)(v27 + 4920);
              else
                v28 = *(HBRUSH *)(v27 + 4912);
            }
            FillRect(v7, &v30, v28);
            BitBltSysBmp(v7, 0);
            GetDpiDependentMetric(12LL, v6);
            BitBltSysBmp(v7, 0);
            GetDpiDependentMetric(12LL, v6);
            BitBltSysBmp(v7, 0);
            GetDpiDependentMetric(12LL, v6);
            BitBltSysBmp(v7, 0);
          }
        }
        else
        {
          DrawFrameControl(v7);
        }
      }
      v17 += 4;
      v18 += 2;
      --v19;
    }
    while ( v19 );
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v31);
    return 1LL;
  }
  return result;
}
