/*
 * XREFs of ?DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180020D20
 * Callers:
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180021240 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 * Callees:
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180021010 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180021040 (-TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180021100 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CContainerVisual::DoHitTest(
        CContainerVisual *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  struct CVisual *v4; // rdi
  unsigned int *v5; // rsi
  char v9; // r12
  char v10; // r13
  unsigned int v11; // ebp
  __int64 v12; // rsi
  unsigned int v13; // eax
  struct tagPOINT v15; // [rsp+30h] [rbp-68h] BYREF
  CVisual *v16; // [rsp+38h] [rbp-60h]
  __int64 v17; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+4Ch] [rbp-4Ch]
  char v19; // [rsp+50h] [rbp-48h]
  char v20; // [rsp+51h] [rbp-47h]
  unsigned int v21; // [rsp+A0h] [rbp+8h] BYREF
  struct CVisual *v22; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int *v23; // [rsp+B8h] [rbp+20h]

  v23 = a4;
  v4 = 0LL;
  v5 = a4;
  v22 = 0LL;
  v21 = 0;
  if ( *((_QWORD *)this + 3) && ((*((_BYTE *)this + 36) & 4) == 0 || *((_DWORD *)this + 32) == -1) )
    goto LABEL_14;
  VisualCollection::GetIterator((char *)this + 144, &v17, a3);
  v9 = v20;
  v10 = v19;
  v11 = v18;
  v12 = v17;
  while ( 1 )
  {
    if ( v10 )
    {
      if ( v9 )
        goto LABEL_8;
    }
    else
    {
      v11 = *(_DWORD *)(v12 + 32);
      v10 = 1;
    }
    --v11;
LABEL_8:
    if ( v11 == -1 )
      break;
    if ( v9 )
      break;
    v16 = *(CVisual **)(*(_QWORD *)(v12 + 8) + 8LL * v11);
    v15 = 0LL;
    if ( CVisual::TransformFromParent(v16, a2, &v15) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CVisual *, struct tagPOINT *, struct CVisual **, unsigned int *))(*(_QWORD *)v16 + 120LL))(
             v16,
             &v15,
             &v22,
             &v21) )
      {
        break;
      }
    }
  }
  v4 = v22;
  v5 = v23;
  if ( !v22 )
  {
    CVisual::DoHitTest(this, a2, &v22, &v21);
    v4 = v22;
  }
LABEL_14:
  v13 = v21;
  *a3 = v4;
  *v5 = v13;
  return v4 != 0LL;
}
