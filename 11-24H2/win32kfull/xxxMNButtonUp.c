/*
 * XREFs of xxxMNButtonUp @ 0x14009D560
 * Callers:
 *     xxxHandleMenuMessages @ 0x14006D0F0 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x14009D684 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 */

__int64 __fastcall xxxMNButtonUp(__int64 **a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  bool v7; // zf
  _DWORD *v8; // rcx
  _QWORD *v9; // r8

  result = *(unsigned int *)(a2 + 8);
  if ( (result & 8) != 0 )
  {
    if ( a3 != -1 )
    {
      result = (__int64)*a1;
      if ( *(_DWORD *)(**a1 + 80) == a3 )
      {
        v7 = (*(_DWORD *)**a1 & 1) == 0;
        v8 = (_DWORD *)**a1;
        if ( !v7 )
        {
          if ( (*v8 & 0x20) != 0 )
          {
            result = *(unsigned int *)**a1;
            if ( (result & 0x80u) != 0LL )
            {
              *(_DWORD *)**a1 &= ~0x80u;
              return xxxMNCancel(a2, 0LL, 0LL, 0LL);
            }
            goto LABEL_10;
          }
LABEL_12:
          result = (__int64)*a1;
          if ( *(_DWORD *)(**a1 + 80) != -1 )
          {
            result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL);
            if ( *(_DWORD *)(**a1 + 80) < (unsigned int)result )
            {
              result = *(int *)(**a1 + 80);
              v9 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96 * result);
              if ( (*(_DWORD *)*v9 & 0x800) == 0 )
              {
                result = *(unsigned int *)(*v9 + 4LL);
                if ( (result & 3) == 0 && !v9[2] )
                  return xxxMNDismissWithNotify(a2, (_DWORD)a1, (_DWORD)v9, *(_DWORD *)(**a1 + 80), a4);
              }
            }
          }
          goto LABEL_10;
        }
        if ( (*v8 & 0x2000) == 0 )
          goto LABEL_12;
        *(_DWORD *)**a1 &= ~0x80u;
        result = xxxMNOpenHierarchy(a1, a2);
      }
    }
LABEL_10:
    *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
  }
  return result;
}
