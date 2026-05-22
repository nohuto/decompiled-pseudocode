/*
 * XREFs of ??$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@AEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x180048F24
 * Callers:
 *     NotifyInputSinkTransformChanged @ 0x180048CA0 (NotifyInputSinkTransformChanged.c)
 * Callees:
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18002F8B4 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x18004C298 (--$_Uninitialized_move@PEAVNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@YAPEAVN.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009ADDC (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C2AC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<NotificationData>::_Emplace_reallocate<unsigned __int64 &,tagINPUT_TRANSFORM const &>(
        char **a1,
        char *a2,
        _QWORD *a3,
        _OWORD *a4)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  char *v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  char *v13; // rbx
  char *v14; // r15
  __int64 v15; // rax
  char *v16; // r8
  char *v17; // rcx
  char *v18; // rdi
  char *v19; // r14
  __int64 v20; // rcx
  char *v21; // rcx
  const struct std::nothrow_t *v22; // rdx
  char *v24; // r8
  char *v25; // rcx
  __int64 v26; // r11
  __int64 v27; // [rsp+20h] [rbp-58h]
  char *v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+80h] [rbp+8h]
  _QWORD *v30; // [rsp+90h] [rbp+18h]
  _OWORD *v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v6 = (a2 - *a1) / 96;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 5);
  if ( v7 == 0x2AAAAAAAAAAAAAALL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength(a1, 0xAAAAAAAAAAAAAAABuLL, a3, a4);
  v8 = v7 + 1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 5);
  v10 = (char *)(v9 >> 1);
  if ( v9 > 0x2AAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v29 = 0x2AAAAAAAAAAAAAALL;
    v12 = -64LL;
    v27 = -64LL;
LABEL_23:
    v13 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v12);
    a4 = v31;
    a3 = v30;
    goto LABEL_10;
  }
  v11 = v7 + 1;
  if ( (unsigned __int64)&v10[v9] >= v8 )
    v11 = (unsigned __int64)&v10[v9];
  if ( v11 > 0x2AAAAAAAAAAAAAALL )
    std::_Throw_bad_array_new_length();
  v12 = 96 * v11;
  v27 = 96 * v11;
  v29 = v11;
  if ( 96 * v11 >= 0x1000 )
    goto LABEL_23;
  if ( v12 )
  {
    v13 = (char *)operator new(v12);
    a4 = v31;
    a3 = v30;
  }
  else
  {
    v13 = 0LL;
  }
  v29 = v11;
LABEL_10:
  v14 = &v13[96 * v6];
  v15 = *a3;
  *(_DWORD *)v14 = 2;
  *((_QWORD *)v14 + 1) = v15;
  *((_QWORD *)v14 + 2) = 0LL;
  *((_OWORD *)v14 + 2) = *a4;
  *((_OWORD *)v14 + 3) = a4[1];
  *((_OWORD *)v14 + 4) = a4[2];
  *((_OWORD *)v14 + 5) = a4[3];
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    if ( v17 != v16 )
    {
      v10 = v13 + 16;
      do
      {
        *((_DWORD *)v10 - 4) = *(_DWORD *)v17;
        *((_QWORD *)v10 - 1) = *((_QWORD *)v17 + 1);
        *(_QWORD *)v10 = *((_QWORD *)v17 + 2);
        *((_QWORD *)v17 + 2) = 0LL;
        *((_QWORD *)v10 + 1) = *((_QWORD *)v17 + 3);
        *((_OWORD *)v10 + 1) = *((_OWORD *)v17 + 2);
        *((_OWORD *)v10 + 2) = *((_OWORD *)v17 + 3);
        *((_OWORD *)v10 + 3) = *((_OWORD *)v17 + 4);
        *((_OWORD *)v10 + 4) = *((_OWORD *)v17 + 5);
        v10 += 96;
        v17 += 96;
      }
      while ( v17 != v16 );
    }
  }
  else
  {
    try
    {
      std::_Uninitialized_move<NotificationData *>(v17, a2, v13);
      v28 = v13;
      std::_Uninitialized_move<NotificationData *>(a2, a1[1], v26);
    }
    catch ( ... )
    {
      std::_Destroy_range<std::allocator<NotificationData>>(v28, v14 + 96);
      std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(96 * v29));
      throw;
    }
  }
  v18 = *a1;
  if ( *a1 )
  {
    v19 = a1[1];
    while ( v18 != v19 )
    {
      v20 = *((_QWORD *)v18 + 2);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        NtCloseCompositionInputSink(v20, v10);
      v18 += 96;
    }
    v21 = *a1;
    v22 = (const struct std::nothrow_t *)(32 * ((a1[2] - *a1) >> 5));
    if ( (unsigned __int64)v22 >= 0x1000 )
    {
      v22 = (const struct std::nothrow_t *)((char *)v22 + 39);
      v24 = (char *)*((_QWORD *)v21 - 1);
      v25 = (char *)(v21 - v24);
      if ( (unsigned __int64)(v25 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v25, v22);
        __debugbreak();
        JUMPOUT(0x180049215LL);
      }
      v21 = v24;
    }
    operator delete(v21, v22);
  }
  *a1 = v13;
  a1[1] = &v13[96 * v8];
  a1[2] = &v13[v27];
  return v14;
}
