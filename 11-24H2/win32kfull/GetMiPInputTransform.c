/*
 * XREFs of GetMiPInputTransform @ 0x140197020
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z @ 0x14029046C (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z.c)
 */

__int64 __fastcall GetMiPInputTransform(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  InputTransform *v5; // rax
  __int64 v6; // rcx
  int v8; // ecx
  volatile struct tagINPUT_TRANSFORM *v9; // [rsp+20h] [rbp-18h]
  char v10; // [rsp+28h] [rbp-10h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 1512);
  if ( v4 )
  {
    if ( (*(_DWORD *)v4 & 1) != 0 )
    {
      v5 = (InputTransform *)ValidateHwnd(*(_QWORD *)(v4 + 48));
      if ( v5 )
      {
        v6 = *(_QWORD *)(a1 + 1512);
        if ( (*(_DWORD *)(v6 + 36) & 0x400000) == 0 )
        {
          v8 = 232;
          goto LABEL_8;
        }
        v11 = *(_QWORD *)(v6 + 104);
        LOBYTE(v9) = 1;
        if ( (unsigned int)InputTransform::GetTransformList(v5, (struct tagWND *)1, (unsigned int)&v11, a2, v9, v10) )
          return 1LL;
      }
    }
  }
  v8 = 87;
LABEL_8:
  UserSetLastError(v8);
  return 0LL;
}
