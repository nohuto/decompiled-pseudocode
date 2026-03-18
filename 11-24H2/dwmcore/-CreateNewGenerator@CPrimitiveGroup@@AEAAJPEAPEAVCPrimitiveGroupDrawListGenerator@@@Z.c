/*
 * XREFs of ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1801712DC
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1801711D8 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x180019EC8 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x180171BF4 (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180171C24 (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1PrivateCompositorBuffer@@@@YAXPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180171D68 (--$ReleaseInterfaceNoNULL@UID2D1PrivateCompositorBuffer@@@@YAXPEAUID2D1PrivateCompositorBuffer@@.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEBXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1802C8EDC (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEBXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGenerator(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  struct CSharedSection *v3; // r8
  struct CPrimitiveGroupDrawListGenerator *v4; // r12
  unsigned int v5; // edx
  struct ID2D1PrivateCompositorBuffer *v6; // r15
  const void *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebp
  int v10; // eax
  unsigned int v11; // eax
  unsigned int *v12; // rdi
  unsigned int v13; // r8d
  _QWORD *v14; // rsi
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // r9d
  __int64 v22; // r8
  __int64 v23; // rcx
  _DWORD *v24; // r10
  __int64 v25; // r9
  unsigned int v26; // eax
  __int64 i; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  CPrimitiveGroupDrawListGenerator *v30; // rbx
  HANDLE ProcessHeap; // rax
  CCommandBuffer *v32; // rax
  CCommandBuffer *v33; // rdi
  HANDLE v34; // rax
  CPrimitiveBuffer *v35; // rax
  CPrimitiveBuffer *v36; // rsi
  unsigned int v37; // edx
  int v38; // r14d
  unsigned int v39; // edx
  int v41; // eax
  unsigned int v42; // eax
  LPVOID v43; // rax
  unsigned int v44; // ebx
  const void *v45; // rax
  HANDLE v46; // rax
  CPrimitiveGroupDrawListGenerator *v47; // rax
  int v48; // r9d
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rdx
  unsigned int v52; // [rsp+20h] [rbp-78h]
  __int128 v53; // [rsp+30h] [rbp-68h]
  __int128 v54; // [rsp+40h] [rbp-58h]
  __int128 v55; // [rsp+50h] [rbp-48h]
  struct ID2D1PrivateCompositorBuffer *v56; // [rsp+A0h] [rbp+8h] BYREF
  struct CPrimitiveGroupDrawListGenerator **v57; // [rsp+A8h] [rbp+10h]
  struct ID2D1PrivateCompositorBuffer *v58; // [rsp+B0h] [rbp+18h] BYREF

  v57 = a2;
  *a2 = 0LL;
  v3 = (struct CSharedSection *)*((_QWORD *)this + 49);
  v4 = 0LL;
  v5 = *((_DWORD *)this + 120);
  v6 = 0LL;
  v7 = (const void *)*((_QWORD *)this + 59);
  v58 = 0LL;
  v56 = 0LL;
  v8 = CD2DSharedBuffer::CreateFromSharedSection(v7, v5, v3, &v58);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x242u, 0LL);
    goto LABEL_31;
  }
  v10 = CD2DSharedBuffer::CreateFromSharedSection(
          *((const void **)this + 61),
          *((_DWORD *)this + 124),
          *((struct CSharedSection **)this + 49),
          &v56);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x248u, 0LL);
    goto LABEL_42;
  }
  v11 = *((_DWORD *)this + 40);
  v12 = (unsigned int *)((char *)this + 412);
  v13 = *((_DWORD *)this + 102);
  v14 = (_QWORD *)((char *)this + 264);
  v15 = *((_DWORD *)this + 103);
  v16 = *((_DWORD *)this + 56);
  if ( v13 >= v11 )
    v13 = *((_DWORD *)this + 40);
  v17 = v11 - v13;
  *((_DWORD *)this + 102) = v13;
  if ( v15 >= v17 )
    v15 = v17;
  v18 = *((_DWORD *)this + 104);
  *v12 = v15;
  if ( v18 >= v16 )
    v18 = v16;
  *((_DWORD *)this + 104) = v18;
  v19 = DynArrayImpl<0>::Grow((__int64)this + 264, 8u, v15 + v13, 1, 0LL);
  v9 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x24Fu, 0LL);
    goto LABEL_42;
  }
  *((_DWORD *)this + 72) = *((_DWORD *)this + 102) + *v12;
  v20 = DynArrayImpl<0>::Grow((__int64)this + 328, 8u, *((_DWORD *)this + 104), 1, 0LL);
  v9 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x252u, 0LL);
LABEL_42:
    v6 = v56;
    goto LABEL_31;
  }
  v21 = 0;
  *((_DWORD *)this + 88) = *((_DWORD *)this + 104);
  if ( *((_DWORD *)this + 102) )
  {
    do
    {
      v22 = v21;
      v23 = *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * v21++);
      *(_QWORD *)(*v14 + 8 * v22) = (v23 + 72) & -(__int64)(v23 != 0);
    }
    while ( v21 < *((_DWORD *)this + 102) );
    v14 = (_QWORD *)((char *)this + 264);
    v24 = (_DWORD *)((char *)this + 412);
  }
  else
  {
    v24 = (_DWORD *)((char *)this + 412);
  }
  v25 = 0LL;
  if ( *v12 )
  {
    do
    {
      v49 = (unsigned int)(v25 + *((_DWORD *)this + 102));
      v50 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v49);
      v25 = (unsigned int)(v25 + 1);
      *(_QWORD *)(*v14 + 8 * v49) = (v50 + 72) & -(__int64)(v50 != 0);
    }
    while ( (unsigned int)v25 < *v24 );
  }
  v26 = *((_DWORD *)this + 104);
  for ( i = 0LL; (unsigned int)i < v26; v26 = *((_DWORD *)this + 104) )
  {
    v51 = (unsigned int)i;
    i = (unsigned int)(i + 1);
    *(_QWORD *)(*((_QWORD *)this + 41) + 8 * v51) = *(_QWORD *)(*((_QWORD *)this + 25) + 8 * v51);
  }
  v28 = *((_QWORD *)this + 33);
  v29 = v26;
  *(_QWORD *)&v55 = v26;
  *((_QWORD *)&v55 + 1) = *((_QWORD *)this + 41);
  if ( !*((_QWORD *)&v55 + 1) && v26
    || (v29 = *((unsigned int *)this + 102),
        i = *((unsigned int *)this + 103),
        *(_QWORD *)&v54 = i,
        (*((_QWORD *)&v54 + 1) = v28 + 8 * v29) == 0LL)
    && *((_DWORD *)this + 103)
    || (*(_QWORD *)&v53 = *((unsigned int *)this + 102), *((_QWORD *)&v53 + 1) = *((_QWORD *)this + 33), !v28)
    && *((_DWORD *)this + 102) )
  {
    ((void (__fastcall *)(__int64, __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      v29,
      v28,
      i,
      v25);
  }
  v30 = 0LL;
  ProcessHeap = GetProcessHeap();
  v32 = (CCommandBuffer *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v33 = v32;
  if ( v32 )
  {
    *(_QWORD *)v32 = 0LL;
    *((_DWORD *)v32 + 2) = 0;
  }
  else
  {
    v33 = 0LL;
  }
  v34 = GetProcessHeap();
  v35 = (CPrimitiveBuffer *)HeapAlloc(v34, 0, 0x10uLL);
  v36 = v35;
  if ( v35 )
  {
    *(_QWORD *)v35 = 0LL;
    *((_DWORD *)v35 + 2) = 0;
  }
  else
  {
    v36 = 0LL;
  }
  v6 = v56;
  if ( !v33 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xA1u, 0LL);
    v38 = -2147024882;
    if ( !v36 )
      goto LABEL_29;
LABEL_25:
    CPrimitiveBuffer::`scalar deleting destructor'(v36, v37);
    if ( !v33 )
      goto LABEL_27;
    goto LABEL_26;
  }
  if ( v36 )
  {
    v41 = CCommandBuffer::Initialize(v33, v58);
    v38 = v41;
    if ( v41 >= 0 )
    {
      v42 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v6 + 32LL))(v6);
      *((_DWORD *)v36 + 2) = v42;
      v43 = operator new[](v42);
      *(_QWORD *)v36 = v43;
      if ( v43 )
      {
        v44 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v6 + 32LL))(v6);
        v45 = (const void *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v6 + 24LL))(v6);
        memcpy_0(*(void **)v36, v45, v44);
        v46 = GetProcessHeap();
        v47 = (CPrimitiveGroupDrawListGenerator *)HeapAlloc(v46, 0, 0x68uLL);
        v30 = v47;
        if ( v47 )
        {
          *((_DWORD *)v47 + 2) = 0;
          *(_QWORD *)v47 = &CPrimitiveGroupDrawListGenerator::`vftable';
          *((_OWORD *)v47 + 2) = v53;
          *((_QWORD *)v47 + 2) = v33;
          *((_QWORD *)v47 + 3) = v36;
          *((_OWORD *)v47 + 3) = v54;
          *((_OWORD *)v47 + 4) = v55;
          *((_QWORD *)v47 + 10) = 0LL;
          *((_QWORD *)v47 + 11) = 0LL;
          *((_QWORD *)v47 + 12) = 0LL;
          ++dword_1803FA82C;
          (**(void (__fastcall ***)(LPVOID))v47)(v47);
          v41 = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(v30);
          v38 = v41;
          v9 = v41;
          if ( v41 >= 0 )
          {
            v4 = v30;
            goto LABEL_30;
          }
          v52 = 174;
          goto LABEL_49;
        }
        v30 = 0LL;
        v52 = 173;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x69u, 0LL);
        v52 = 166;
      }
      v38 = -2147024882;
      v48 = -2147024882;
LABEL_46:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v48, v52, 0LL);
      goto LABEL_25;
    }
    v52 = 164;
LABEL_49:
    v48 = v41;
    goto LABEL_46;
  }
  v38 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xA2u, 0LL);
LABEL_26:
  CPrimitiveBuffer::`scalar deleting destructor'(v33, v39);
LABEL_27:
  if ( v30 )
    (*(void (__fastcall **)(CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v30 + 8LL))(v30);
LABEL_29:
  v9 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v38, 0x281u, 0LL);
    goto LABEL_31;
  }
LABEL_30:
  *v57 = v4;
LABEL_31:
  ReleaseInterfaceNoNULL<ID2D1PrivateCompositorBuffer>(v58);
  ReleaseInterfaceNoNULL<ID2D1PrivateCompositorBuffer>(v6);
  return v9;
}
