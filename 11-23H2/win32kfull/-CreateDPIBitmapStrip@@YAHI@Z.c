/*
 * XREFs of ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0116710
 * Callers:
 *     PrepareHDCBITSBitmap @ 0x1C0016A3C (PrepareHDCBITSBitmap.c)
 *     CreateBitmapStrip @ 0x1C00D4250 (CreateBitmapStrip.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0024FB0 (GreCreateCompatibleBitmapInternal.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     FillRect @ 0x1C004579C (FillRect.c)
 *     BitBltSysBmp @ 0x1C0076710 (BitBltSysBmp.c)
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C00768E8 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     GetDpiDependentMetric @ 0x1C00E91E0 (GetDpiDependentMetric.c)
 *     DrawFrameControl @ 0x1C011A100 (DrawFrameControl.c)
 */

__int64 __fastcall CreateDPIBitmapStrip(unsigned int a1)
{
  __int64 *v1; // rbx
  int v2; // ebp
  HDC v3; // r15
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int16 *v8; // r14
  __int64 v9; // r13
  __int16 *v10; // rsi
  LONG v11; // ebx
  LONG v12; // r12d
  __int16 v13; // r9
  LONG v14; // eax
  HBRUSH v15; // r8
  unsigned int v16; // ebx
  int v17; // r12d
  unsigned int v18; // ebx
  unsigned int v19; // edi
  int DpiDependentMetric; // eax
  RECT v21; // [rsp+30h] [rbp-38h] BYREF
  char v22; // [rsp+70h] [rbp+8h] BYREF

  v21 = 0LL;
  v1 = (__int64 *)((char *)&gOemBitmapSet + 760 * a1);
  if ( a1 )
    v2 = 24 * (a1 + 3);
  else
    v2 = *(unsigned __int16 *)(gpsi + 6998LL);
  v3 = *(HDC *)(gpDispInfo + 64LL);
  EnsureOemBitmapInfoForDpiSlot((struct OEMBITMAPSET *)v1, v2);
  result = GreCreateCompatibleBitmapInternal(
             *(_QWORD *)(gpDispInfo + 56LL),
             *((_DWORD *)v1 + 2),
             *((_DWORD *)v1 + 3),
             0,
             0LL,
             0LL);
  v5 = result;
  if ( result )
  {
    GreSetBitmapOwner(result, 0LL);
    GreSelectBitmap(v3, v5);
    if ( *v1 )
      GreDeleteObject(*v1);
    *v1 = v5;
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v22);
    v8 = (__int16 *)&unk_1C0316C92;
    v9 = 93LL;
    v10 = (__int16 *)(v1 + 2);
    do
    {
      if ( v10[2] )
      {
        v11 = *v10;
        v12 = v10[1];
        v7 = (unsigned __int16)*(v8 - 1);
        v13 = *v8;
        v21.right = v11 + v10[2];
        v14 = v12 + v10[3];
        v21.left = v11;
        v21.top = v12;
        v21.bottom = v14;
        if ( (_DWORD)v7 == 0xFFFF )
        {
          if ( (v13 & 1) != 0 )
          {
            if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
            {
              if ( (v13 & 0x100) != 0 )
                v15 = *(HBRUSH *)(gpsi + 4720LL);
              else
                v15 = *(HBRUSH *)(gpsi + 4712LL);
            }
            else if ( (v13 & 0x100) != 0 )
            {
              v15 = *(HBRUSH *)(gpsi + 4920LL);
            }
            else
            {
              v15 = *(HBRUSH *)(gpsi + 4912LL);
            }
            FillRect(v3, &v21, v15);
            v16 = v11 + 2;
            v17 = v12 + 2;
            BitBltSysBmp(v3, v16, v17, 4u, 0);
            v18 = GetDpiDependentMetric(12, v2) - 2 + v16;
            BitBltSysBmp(v3, v18, v17, 0xEu, 0);
            v19 = v18 + GetDpiDependentMetric(12, v2);
            BitBltSysBmp(v3, v19, v17, 0, 0);
            DpiDependentMetric = GetDpiDependentMetric(12, v2);
            BitBltSysBmp(v3, v19 + DpiDependentMetric, v17, 0xBu, 0);
          }
        }
        else
        {
          DrawFrameControl(v3);
        }
      }
      v10 += 4;
      v8 += 2;
      --v9;
    }
    while ( v9 );
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v22, v6, v7);
    return 1LL;
  }
  return result;
}
