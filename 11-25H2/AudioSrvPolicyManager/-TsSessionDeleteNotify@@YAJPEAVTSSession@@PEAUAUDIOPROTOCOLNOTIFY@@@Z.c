/*
 * XREFs of ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180015E38
 * Callers:
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180015110 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@XZ @ 0x18000D15C (--1-$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U-$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@X.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015D50 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall TsSessionDeleteNotify(struct TSSession *a1, struct AUDIOPROTOCOLNOTIFY *a2)
{
  _QWORD **v2; // rcx
  void **v3; // rdi
  char v4; // si
  _QWORD *v5; // rax
  _QWORD *v6; // r8
  void **v7; // rbx
  void **v9; // [rsp+28h] [rbp-20h] BYREF
  void **v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (_QWORD **)((char *)a1 + 16);
  v3 = 0LL;
  v10 = (void **)&v9;
  v4 = 0;
  v9 = 0LL;
  v5 = *v2;
  if ( *v2 )
  {
    do
    {
      if ( v4 || (struct AUDIOPROTOCOLNOTIFY *)v5[1] != a2 )
      {
        v2 = (_QWORD **)v5;
        v5 = (_QWORD *)*v5;
      }
      else
      {
        v6 = *v2;
        v4 = 1;
        v5 = (_QWORD *)**v2;
        *v6 = 0LL;
        *v2 = v5;
        *v10 = v6;
        v10 = (void **)v6;
      }
    }
    while ( v5 );
    v3 = v9;
  }
  if ( v3 )
  {
    do
    {
      v7 = (void **)*v3;
      std::unique_ptr<AUDIOPROTOCOLNOTIFY>::~unique_ptr<AUDIOPROTOCOLNOTIFY>(v3 + 1);
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x10);
      v3 = v7;
    }
    while ( v7 );
  }
  if ( v4 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x40B,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)0x80070490LL);
  return 2147943568LL;
}
