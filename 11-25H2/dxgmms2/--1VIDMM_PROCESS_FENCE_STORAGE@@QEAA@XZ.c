/*
 * XREFs of ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x140100ADC
 * Callers:
 *     ??_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z @ 0x14002869C (--_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z @ 0x140028528 (--_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(VIDMM_PROCESS_FENCE_STORAGE *this)
{
  VIDMM_FENCE_STORAGE_PAGE **v2; // rdi
  VIDMM_FENCE_STORAGE_PAGE *v3; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v4; // rdi
  VIDMM_FENCE_STORAGE_PAGE *v5; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v6; // rdi
  VIDMM_FENCE_STORAGE_PAGE *v7; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v8; // rdi
  VIDMM_FENCE_STORAGE_PAGE *v9; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v10; // rdi
  VIDMM_FENCE_STORAGE_PAGE *v11; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v12; // rdi
  VIDMM_FENCE_STORAGE_PAGE *v13; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v14; // rbx
  VIDMM_FENCE_STORAGE_PAGE *v15; // rcx
  VIDMM_FENCE_STORAGE_PAGE *v16; // rax
  VIDMM_FENCE_STORAGE_PAGE *v17; // rax
  VIDMM_FENCE_STORAGE_PAGE *v18; // rax
  VIDMM_FENCE_STORAGE_PAGE *v19; // rax
  VIDMM_FENCE_STORAGE_PAGE *v20; // rax
  VIDMM_FENCE_STORAGE_PAGE *v21; // rax
  VIDMM_FENCE_STORAGE_PAGE *v22; // rax

  v2 = (VIDMM_FENCE_STORAGE_PAGE **)((char *)this + 8);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (VIDMM_FENCE_STORAGE_PAGE *)v2 )
      break;
    if ( *((VIDMM_FENCE_STORAGE_PAGE ***)v3 + 1) != v2
      || (v19 = *(VIDMM_FENCE_STORAGE_PAGE **)v3, *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v3 + 8LL) != v3) )
    {
LABEL_37:
      __fastfail(3u);
    }
    *v2 = v19;
    *((_QWORD *)v19 + 1) = v2;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v3);
  }
  v4 = (VIDMM_FENCE_STORAGE_PAGE **)((char *)this + 24);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (VIDMM_FENCE_STORAGE_PAGE *)v4 )
      break;
    if ( *((VIDMM_FENCE_STORAGE_PAGE ***)v5 + 1) != v4 )
      goto LABEL_37;
    v17 = *(VIDMM_FENCE_STORAGE_PAGE **)v5;
    if ( *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v5 + 8LL) != v5 )
      goto LABEL_37;
    *v4 = v17;
    *((_QWORD *)v17 + 1) = v4;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v5);
  }
  v6 = (VIDMM_FENCE_STORAGE_PAGE **)((char *)this + 104);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (VIDMM_FENCE_STORAGE_PAGE *)v6 )
      break;
    if ( *((VIDMM_FENCE_STORAGE_PAGE ***)v7 + 1) != v6 )
      goto LABEL_37;
    v20 = *(VIDMM_FENCE_STORAGE_PAGE **)v7;
    if ( *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_37;
    *v6 = v20;
    *((_QWORD *)v20 + 1) = v6;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v7);
  }
  v8 = (VIDMM_FENCE_STORAGE_PAGE **)((char *)this + 40);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == (VIDMM_FENCE_STORAGE_PAGE *)v8 )
      break;
    if ( *((VIDMM_FENCE_STORAGE_PAGE ***)v9 + 1) != v8 )
      goto LABEL_37;
    v22 = *(VIDMM_FENCE_STORAGE_PAGE **)v9;
    if ( *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v9 + 8LL) != v9 )
      goto LABEL_37;
    *v8 = v22;
    *((_QWORD *)v22 + 1) = v8;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v9);
  }
  v10 = (VIDMM_FENCE_STORAGE_PAGE **)((char *)this + 72);
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 == (VIDMM_FENCE_STORAGE_PAGE *)v10 )
      break;
    if ( *((VIDMM_FENCE_STORAGE_PAGE ***)v11 + 1) != v10 )
      goto LABEL_37;
    v18 = *(VIDMM_FENCE_STORAGE_PAGE **)v11;
    if ( *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v11 + 8LL) != v11 )
      goto LABEL_37;
    *v10 = v18;
    *((_QWORD *)v18 + 1) = v10;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v11);
  }
  v12 = (VIDMM_FENCE_STORAGE_PAGE **)((char *)this + 56);
  while ( 1 )
  {
    v13 = *v12;
    if ( *v12 == (VIDMM_FENCE_STORAGE_PAGE *)v12 )
      break;
    if ( *((VIDMM_FENCE_STORAGE_PAGE ***)v13 + 1) != v12 )
      goto LABEL_37;
    v21 = *(VIDMM_FENCE_STORAGE_PAGE **)v13;
    if ( *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v13 + 8LL) != v13 )
      goto LABEL_37;
    *v12 = v21;
    *((_QWORD *)v21 + 1) = v12;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v13);
  }
  v14 = (VIDMM_FENCE_STORAGE_PAGE **)((char *)this + 88);
  while ( 1 )
  {
    v15 = *v14;
    if ( *v14 == (VIDMM_FENCE_STORAGE_PAGE *)v14 )
      break;
    if ( *((VIDMM_FENCE_STORAGE_PAGE ***)v15 + 1) != v14 )
      goto LABEL_37;
    v16 = *(VIDMM_FENCE_STORAGE_PAGE **)v15;
    if ( *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v15 + 8LL) != v15 )
      goto LABEL_37;
    *v14 = v16;
    *((_QWORD *)v16 + 1) = v14;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v15);
  }
}
