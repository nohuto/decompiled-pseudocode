/*
 * XREFs of ??$_Emplace_reallocate@W4NotificationType@@AEA_KH@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K$$QEAH@Z @ 0x18004B630
 * Callers:
 *     ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x18004C0E0 (-InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x18004BF38 (--$_Get_size_of_n@$0GA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAXQEAVNotificationData@@_K1@Z @ 0x18004BFE8 (-_Change_array@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@AEAAXQEAV.c)
 *     ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x18004C298 (--$_Uninitialized_move@PEAVNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@YAPEAVN.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C2AC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 */

char *__fastcall std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,int>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4,
        int *a5)
{
  __int64 v8; // r10
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  size_t size_of; // rax
  char *v16; // rax
  char *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  char *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r11
  char *result; // rax
  char *v25; // r11
  __int64 v26; // [rsp+20h] [rbp-48h]
  char *v27; // [rsp+28h] [rbp-40h]
  char *v28; // [rsp+28h] [rbp-40h]
  char *v29; // [rsp+70h] [rbp+8h]

  v8 = a2 - *a1;
  v9 = v8 / 96;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 5);
  v11 = 0x2AAAAAAAAAAAAAALL;
  if ( v10 == 0x2AAAAAAAAAAAAAALL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength(
      a1,
      (unsigned __int128)(v8 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
      a3,
      a4);
  v12 = v10 + 1;
  v13 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 5);
  v14 = v13 >> 1;
  if ( v13 <= 0x2AAAAAAAAAAAAAALL - (v13 >> 1) )
  {
    v11 = v14 + v13;
    if ( v14 + v13 < v12 )
      v11 = v12;
  }
  size_of = std::_Get_size_of_n<96>(v11);
  v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v27 = v16;
  v17 = &v16[96 * v9];
  try
  {
    v18 = *a5;
    v19 = *a4;
    *(_DWORD *)v17 = *a3;
    *((_QWORD *)v17 + 1) = v19;
    *((_QWORD *)v17 + 2) = 0LL;
    *((_QWORD *)v17 + 3) = v18;
    v29 = v17;
    v20 = a1[1];
    v21 = v16;
    v22 = *a1;
    if ( a2 != v20 )
    {
      std::_Uninitialized_move<NotificationData *>(v22, a2, v16);
      v29 = v25;
      v21 = v17 + 96;
      v20 = a1[1];
      v22 = a2;
    }
    std::_Uninitialized_move<NotificationData *>(v22, v20, v21);
    std::vector<NotificationData>::_Change_array(a1, v23, v12, v11, v17 + 96, v27);
    result = v17;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<NotificationData>>(v29, v26);
    std::_Deallocate<16,0>(v28, (const struct std::nothrow_t *)(96 * v11));
    throw;
  }
  return result;
}
