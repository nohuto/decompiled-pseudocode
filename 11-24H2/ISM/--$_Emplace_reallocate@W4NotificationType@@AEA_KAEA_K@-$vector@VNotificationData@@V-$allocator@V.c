/*
 * XREFs of ??$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K2@Z @ 0x18004BCC8
 * Callers:
 *     NotifyInputSinkParented @ 0x18004B790 (NotifyInputSinkParented.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x18004BF38 (--$_Get_size_of_n@$0GA@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x18004BF68 (--$_Destroy_range@V-$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEA.c)
 *     ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x18004C298 (--$_Uninitialized_move@PEAVNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@YAPEAVN.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C2AC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

char *__fastcall std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,unsigned __int64 &>(
        char **a1,
        char *a2,
        _DWORD *a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  size_t size_of; // rax
  char *v14; // rax
  char *v15; // r14
  char *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  char *v19; // rdx
  char *v20; // rcx
  char *v21; // r8
  __int64 v22; // r11
  __int64 v23; // rdx
  char *v24; // rdi
  char *v25; // r15
  __int64 v26; // rcx
  char *v27; // rcx
  const struct std::nothrow_t *v28; // rdx
  char *result; // rax
  char *v30; // r8
  char *v31; // rcx
  char *v32; // [rsp+28h] [rbp-40h]
  char *v33; // [rsp+70h] [rbp+8h]

  v7 = (a2 - *a1) / 96;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 5);
  v9 = 0x2AAAAAAAAAAAAAALL;
  if ( v8 == 0x2AAAAAAAAAAAAAALL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength(a1, 0xAAAAAAAAAAAAAAABuLL, a3, a4);
  v10 = v8 + 1;
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 5);
  v12 = v11 >> 1;
  if ( v11 <= 0x2AAAAAAAAAAAAAALL - (v11 >> 1) )
  {
    v9 = v12 + v11;
    if ( v12 + v11 < v10 )
      v9 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<96>(v9);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v15 = v14;
  v32 = v14;
  v16 = &v14[96 * v7];
  try
  {
    v17 = *a5;
    v18 = *a4;
    *(_DWORD *)v16 = *a3;
    *((_QWORD *)v16 + 1) = v18;
    *((_QWORD *)v16 + 2) = 0LL;
    *((_QWORD *)v16 + 3) = v17;
    v33 = &v14[96 * v7];
    v19 = a1[1];
    v20 = *a1;
    v21 = v14;
    if ( a2 == v19 )
    {
      while ( v20 != v19 )
      {
        *(_DWORD *)v21 = *(_DWORD *)v20;
        *((_QWORD *)v21 + 1) = *((_QWORD *)v20 + 1);
        *((_QWORD *)v21 + 2) = *((_QWORD *)v20 + 2);
        *((_QWORD *)v20 + 2) = 0LL;
        *((_QWORD *)v21 + 3) = *((_QWORD *)v20 + 3);
        *((_OWORD *)v21 + 2) = *((_OWORD *)v20 + 2);
        *((_OWORD *)v21 + 3) = *((_OWORD *)v20 + 3);
        *((_OWORD *)v21 + 4) = *((_OWORD *)v20 + 4);
        *((_OWORD *)v21 + 5) = *((_OWORD *)v20 + 5);
        v21 += 96;
        v20 += 96;
      }
      std::_Destroy_range<std::allocator<NotificationData>>(v21, v21);
    }
    else
    {
      std::_Uninitialized_move<NotificationData *>(v20, a2, v14);
      v33 = v15;
      std::_Uninitialized_move<NotificationData *>(a2, a1[1], v22);
    }
    v24 = *a1;
    if ( *a1 )
    {
      v25 = a1[1];
      while ( v24 != v25 )
      {
        v26 = *((_QWORD *)v24 + 2);
        if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          NtCloseCompositionInputSink(v26, v23);
        v24 += 96;
      }
      v27 = *a1;
      v28 = (const struct std::nothrow_t *)(32 * ((a1[2] - *a1) >> 5));
      if ( (unsigned __int64)v28 >= 0x1000 )
      {
        v28 = (const struct std::nothrow_t *)((char *)v28 + 39);
        v30 = (char *)*((_QWORD *)v27 - 1);
        v31 = (char *)(v27 - v30);
        if ( (unsigned __int64)(v31 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v31, v28);
          __debugbreak();
          JUMPOUT(0x18004BF32LL);
        }
        v27 = v30;
      }
      operator delete(v27, v28);
    }
    *a1 = v15;
    a1[1] = &v15[96 * v10];
    a1[2] = &v15[96 * v9];
    result = v16;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<NotificationData>>(v33, v16 + 96);
    std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)(96 * v9));
    throw;
  }
  return result;
}
