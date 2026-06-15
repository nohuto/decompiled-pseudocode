/*
 * XREFs of ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x1800125F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __std_find_trivial_4 @ 0x18001FB60 (__std_find_trivial_4.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180041534 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

float __fastcall CProcess::GetScreenReaderPolicyVolume(CProcess *this)
{
  unsigned int v1; // ebp
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  DWORD v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // eax
  struct TSSession *v9; // rbx
  __int64 trivial_4; // rax
  float v11; // xmm6_4
  __int64 v12; // rdi
  __int64 v13; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct TSSession *v15; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 40);
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  v3 = *((_DWORD *)this + 41);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v4 = 0LL;
  v15 = 0LL;
  EnterCriticalSection(&stru_180067AF8);
  v5 = *(_QWORD *)(qword_180067B38
                 + 16
                 * (qword_180067B50 & (0x100000001B3LL
                                     * (((unsigned __int64)v3 >> 24) ^ (0x100000001B3LL
                                                                      * (BYTE2(v3) ^ (0x100000001B3LL
                                                                                    * ((0x100000001B3LL
                                                                                      * ((unsigned __int8)v3 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v3))))))))
                 + 8);
  if ( v5 != qword_180067B28 )
  {
    while ( v3 != *(_DWORD *)(v5 + 16) )
    {
      if ( v5 == *(_QWORD *)(qword_180067B38
                           + 16
                           * (qword_180067B50 & (0x100000001B3LL
                                               * (((unsigned __int64)v3 >> 24) ^ (0x100000001B3LL
                                                                                * (BYTE2(v3) ^ (0x100000001B3LL
                                                                                              * ((0x100000001B3LL
                                                                                                * ((unsigned __int8)v3 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v3))))))))) )
        goto LABEL_6;
      v5 = *(_QWORD *)(v5 + 8);
    }
    v4 = v5;
  }
LABEL_6:
  v6 = qword_180067B28;
  if ( v4 )
    v6 = v4;
  if ( v6 == qword_180067B28 )
  {
    LeaveCriticalSection(&stru_180067AF8);
    v7 = TsSessionCreate(v3, &v15);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43A,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v7);
      if ( v2 )
        LeaveCriticalSection(v2);
      return 0.0;
    }
    v9 = v15;
  }
  else
  {
    v9 = *(struct TSSession **)(v6 + 24);
    LeaveCriticalSection(&stru_180067AF8);
  }
  trivial_4 = _std_find_trivial_4(*((_QWORD *)v9 + 123), *((_QWORD *)v9 + 124), v1);
  v11 = *((float *)v9 + 252);
  v12 = trivial_4;
  v13 = *((_QWORD *)v9 + 124);
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v12 == v13 )
    return v11;
  else
    return FLOAT_1_0;
}
