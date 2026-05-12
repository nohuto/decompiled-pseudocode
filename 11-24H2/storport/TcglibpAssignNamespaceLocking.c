/*
 * XREFs of TcglibpAssignNamespaceLocking @ 0x14013DAE0
 * Callers:
 *     TcglibAssignNamespaceLocking @ 0x14013B9FC (TcglibAssignNamespaceLocking.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x14008578C (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x14013EF38 (TcglibpCallMethod.c)
 */

__int64 __fastcall TcglibpAssignNamespaceLocking(int **a1, int a2, int a3, __int64 a4)
{
  int v6; // esi
  int v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = a3;
  v6 = (int)a1;
  TcglibEalLogCommand(*a1, "AssignNamespaceLocking", a3, 0, 0LL, 0LL);
  return TcglibpCallMethod(
           v6,
           a2,
           0,
           2052,
           (__int64)GenAssignNamespaceParams,
           (__int64)&v8,
           0LL,
           0LL,
           (__int64)ParseAssignNamespace,
           a4);
}
