/*
 * XREFs of ??0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z @ 0x180015B14
 * Callers:
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800156F0 (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x180089FF8 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PointerInputMediator::PointerFrame::PointerFrame(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // r14
  char *v13; // rcx
  __int64 v14; // rdx
  const struct std::nothrow_t *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  char *v25; // r8
  char *v26; // rcx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  v4 = *(_QWORD *)(a2 + 176);
  *(_QWORD *)(a2 + 176) = 0LL;
  v5 = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 168) = 0LL;
  v6 = *(_QWORD *)(a2 + 160);
  *(_QWORD *)(a2 + 160) = 0LL;
  *(_QWORD *)(a1 + 160) = v6;
  *(_QWORD *)(a1 + 168) = v5;
  *(_QWORD *)(a1 + 176) = v4;
  v7 = *(_QWORD *)(a2 + 200);
  *(_QWORD *)(a2 + 200) = 0LL;
  v8 = *(_QWORD *)(a2 + 192);
  *(_QWORD *)(a2 + 192) = 0LL;
  v9 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)(a2 + 184) = 0LL;
  *(_QWORD *)(a1 + 184) = v9;
  *(_QWORD *)(a1 + 192) = v8;
  *(_QWORD *)(a1 + 200) = v7;
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 208);
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  v10 = operator new(0x38uLL);
  *v10 = v10;
  v10[1] = v10;
  *(_QWORD *)(a1 + 216) = v10;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v11 = v10;
  v12 = operator new(0x80uLL);
  v13 = *(char **)(a1 + 232);
  v14 = (__int64)(*(_QWORD *)(a1 + 248) - (_QWORD)v13) >> 3;
  if ( v14 )
  {
    v15 = (const struct std::nothrow_t *)(8 * v14);
    if ( (unsigned __int64)v15 >= 0x1000 )
    {
      v15 = (const struct std::nothrow_t *)((char *)v15 + 39);
      v25 = (char *)*((_QWORD *)v13 - 1);
      v26 = (char *)(v13 - v25);
      if ( (unsigned __int64)(v26 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v26, v15);
        __debugbreak();
        JUMPOUT(0x180015D97LL);
      }
      v13 = v25;
    }
    operator delete(v13, v15);
  }
  *(_QWORD *)(a1 + 232) = v12;
  v16 = v12 + 16;
  *(_QWORD *)(a1 + 240) = v12 + 16;
  *(_QWORD *)(a1 + 248) = v12 + 16;
  while ( v12 != v16 )
    *v12++ = v11;
  v17 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = *(_QWORD *)(a2 + 216);
  *(_QWORD *)(a2 + 216) = v17;
  v18 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 224);
  *(_QWORD *)(a2 + 224) = v18;
  v19 = *(_QWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 232);
  *(_QWORD *)(a2 + 232) = v19;
  v20 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 240);
  *(_QWORD *)(a2 + 240) = v20;
  v21 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = *(_QWORD *)(a2 + 248);
  *(_QWORD *)(a2 + 248) = v21;
  v22 = *(_QWORD *)(a2 + 256);
  *(_QWORD *)(a2 + 256) = 7LL;
  *(_QWORD *)(a1 + 256) = v22;
  v23 = *(_QWORD *)(a2 + 264);
  *(_QWORD *)(a2 + 264) = 8LL;
  *(_QWORD *)(a1 + 264) = v23;
  return a1;
}
