/*
 * XREFs of ?_Change_array@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAXQEAVNotificationData@@_K1@Z @ 0x18004FB68
 * Callers:
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KH@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K$$QEAH@Z @ 0x18004F1B0 (--$_Emplace_reallocate@W4NotificationType@@AEA_KH@-$vector@VNotificationData@@V-$allocator@VNoti.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

char *__fastcall std::vector<NotificationData>::_Change_array(char **a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  char *v9; // rsi
  __int64 v10; // rcx
  char *v11; // rcx
  const struct std::nothrow_t *v12; // rdx
  char *result; // rax
  char *v14; // r8
  char *v15; // rcx

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    while ( v4 != v9 )
    {
      v10 = *((_QWORD *)v4 + 2);
      if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        NtCloseCompositionInputSink(v10, a2);
      v4 += 96;
    }
    v11 = *a1;
    v12 = (const struct std::nothrow_t *)(32 * ((a1[2] - *a1) >> 5));
    if ( (unsigned __int64)v12 >= 0x1000 )
    {
      v14 = (char *)*((_QWORD *)v11 - 1);
      v12 = (const struct std::nothrow_t *)((char *)v12 + 39);
      v15 = (char *)(v11 - v14);
      if ( (unsigned __int64)(v15 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v15, v12);
        __debugbreak();
        JUMPOUT(0x18004FC5ALL);
      }
      v11 = v14;
    }
    operator delete(v11, v12);
  }
  *a1 = a2;
  a1[1] = &a2[96 * a3];
  result = &a2[96 * a4];
  a1[2] = result;
  return result;
}
