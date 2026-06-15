/*
 * XREFs of ?GetFormat@CAPOWrapperClient@@UEAAJIPEAPEAUIAudioMediaType@@@Z @ 0x1800ABF70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreateAudioMediaType_Unsafe @ 0x1800A6ED8 (CreateAudioMediaType_Unsafe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOWrapperClient::GetFormat(CAPOWrapperClient *this, __int64 a2, struct IAudioMediaType **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int AudioMediaType_Unsafe; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF

  pv = 0LL;
  if ( *((_DWORD *)this + 12) )
  {
    AudioMediaType_Unsafe = (*(__int64 (__fastcall **)(_QWORD, __int64, LPVOID *))(**((_QWORD **)this + 2) + 96LL))(
                              *((_QWORD *)this + 2),
                              a2,
                              &pv);
    v4 = AudioMediaType_Unsafe;
    if ( AudioMediaType_Unsafe >= 0 )
    {
      AudioMediaType_Unsafe = CreateAudioMediaType_Unsafe(
                                (const struct tWAVEFORMATEX *)pv,
                                (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                                a3);
      v4 = AudioMediaType_Unsafe;
      if ( AudioMediaType_Unsafe >= 0 )
      {
        v4 = 0;
        goto LABEL_10;
      }
      v6 = 410LL;
    }
    else
    {
      v6 = 404LL;
    }
    v5 = (unsigned int)AudioMediaType_Unsafe;
  }
  else
  {
    v4 = -2147467262;
    v5 = 2147500034LL;
    v6 = 402LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
    (const char *)v5);
LABEL_10:
  CoTaskMemFree(pv);
  return v4;
}
