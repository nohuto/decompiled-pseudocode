/*
 * XREFs of ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x1800047B0
 * Callers:
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180019E40 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __std_find_trivial_4 @ 0x18001FC10 (__std_find_trivial_4.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall TsSessionIdIsAScreenReaderProcess(DWORD a1, unsigned int a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  struct TSSession *v12; // rbx
  __int64 trivial_4; // rax
  bool v14; // bl
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct TSSession *v17; // [rsp+68h] [rbp+20h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v7 = 0LL;
  v17 = 0LL;
  EnterCriticalSection(&stru_180064A78);
  v8 = *(_QWORD *)(qword_180064AB8
                 + 16
                 * (qword_180064AD0 & (0x100000001B3LL
                                     * (HIBYTE(a1) ^ (0x100000001B3LL
                                                    * (BYTE2(a1) ^ (0x100000001B3LL
                                                                  * (BYTE1(a1) ^ (0x100000001B3LL
                                                                                * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))))
                 + 8);
  if ( v8 != qword_180064AA8 )
  {
    while ( a1 != *(_DWORD *)(v8 + 16) )
    {
      if ( v8 == *(_QWORD *)(qword_180064AB8
                           + 16
                           * (qword_180064AD0 & (0x100000001B3LL
                                               * (HIBYTE(a1) ^ (0x100000001B3LL
                                                              * (BYTE2(a1) ^ (0x100000001B3LL
                                                                            * (BYTE1(a1) ^ (0x100000001B3LL
                                                                                          * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))))) )
        goto LABEL_6;
      v8 = *(_QWORD *)(v8 + 8);
    }
    v7 = v8;
  }
LABEL_6:
  v9 = qword_180064AA8;
  if ( v7 )
    v9 = v7;
  if ( v9 == qword_180064AA8 )
  {
    LeaveCriticalSection(&stru_180064A78);
    v10 = TsSessionCreate(a1, &v17);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43A,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v10,
        (int)v6);
      if ( v6 )
        LeaveCriticalSection(v6);
      return 0;
    }
    v12 = v17;
  }
  else
  {
    v12 = *(struct TSSession **)(v9 + 24);
    LeaveCriticalSection(&stru_180064A78);
  }
  trivial_4 = _std_find_trivial_4(*((_QWORD *)v12 + 123), *((_QWORD *)v12 + 124), a2);
  if ( a3 )
    *a3 = *((float *)v12 + 252);
  v14 = trivial_4 != *((_QWORD *)v12 + 124);
  if ( v6 )
    LeaveCriticalSection(v6);
  return v14;
}
