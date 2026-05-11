/*
 * XREFs of PropertyGetBooleanBasicSupportSideband @ 0x1400323C4
 * Callers:
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x140011180 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetBooleanBasicSupportSideband(__int64 a1, int *a2, __int64 a3)
{
  __int64 v3; // r10
  int v4; // r9d
  unsigned int v5; // ecx
  __int64 result; // rax
  _DWORD *v7; // r8
  __int64 v8; // rcx

  v3 = *(unsigned int *)(a1 + 92);
  v4 = 4;
  v5 = 16 * *(_DWORD *)(a1 + 92) + 56;
  if ( (unsigned int)*a2 >= 4 )
  {
    result = 0LL;
    *(_DWORD *)a3 = 515;
    if ( (unsigned int)*a2 >= 0x28 )
    {
      *(_DWORD *)(a3 + 4) = v5;
      *(_QWORD *)(a3 + 24) = 11LL;
      v4 = 40;
      *(GUID *)(a3 + 8) = KSPROPTYPESETID_General;
      *(_QWORD *)(a3 + 32) = 1LL;
      if ( *a2 >= v5 )
      {
        *(_DWORD *)(a3 + 44) = 16;
        *(_DWORD *)(a3 + 40) = 2;
        *(_DWORD *)(a3 + 52) = 2;
        v4 = v5;
        *(_DWORD *)(a3 + 48) = v3;
        if ( (_DWORD)v3 )
        {
          v7 = (_DWORD *)(a3 + 68);
          v8 = v3;
          do
          {
            *(v7 - 3) = 1;
            *(v7 - 1) = 0;
            *v7 = 1;
            v7 += 4;
            --v8;
          }
          while ( v8 );
        }
      }
    }
  }
  else
  {
    v4 = v5;
    result = 3221225507LL;
  }
  *a2 = v4;
  return result;
}
